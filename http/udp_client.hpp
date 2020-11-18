#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <strings.h>
class Client{
  private:
    int sockfd;
    std::string peer_ip;
    short peer_port;
  public:
    Client(std::string _peer_ip= "127.0.0.1", short _peer_port=8080)
      :sockfd(-1), peer_ip(_peer_ip), peer_port(_peer_port)
    {

    }
    void InitClient()
    {
      sockfd = socket(AF_INET, SOCK_DGRAM, 0);
      if(sockfd < 0){
        std::cerr << "socket error ..." << std::endl;
        exit(2);

      }

    }
    void Run()
    {
      std::string message;
      struct sockaddr_in server;
      server.sin_family = AF_INET;
      server.sin_port = htons(peer_port);
      server.sin_addr.s_addr = inet_addr(peer_ip.c_str());

      socklen_t len = sizeof(server);
      char buf[1024];
      struct sockaddr_in temp;
      int flag = 1;
      while(1){
        socklen_t len = sizeof(temp);
        if(flag){
          std::cout << "请输入你要发送的信息# ";
          std::cin >> message;
          sendto(sockfd, message.c_str(), message.size(), 0, (struct sockaddr*)&server, len);
          flag = 0;

        }
        ssize_t s = recvfrom(sockfd, buf, sizeof(buf)-1, 0, (struct sockaddr*)&temp, &len);
        if(s > 0){
          buf[s] = 0;
          std::cout << "server echo# " << buf << std::endl;

        }

      }

    }
    ~Client()
    {
      if(sockfd >= 0){
        close(sockfd);

      }

    }

};

