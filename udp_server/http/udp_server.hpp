#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <strings.h>
#include <sys/wait.h>
class Server{
  private:
    short port;
    std::string ip;
    int sockfd;
  public:
    Server(std::string _ip="127.0.0.1", short _port = 8080):ip(_ip), port(_port), sockfd(-1)
  {

  }
    void InitServer()
    {
      sockfd = socket(AF_INET, SOCK_DGRAM, 0);
      if(sockfd < 0){
        std::cerr << "socket error..." << std::endl;
        exit(2);

      }

      struct sockaddr_in local;
      bzero(&local, sizeof(local));
      local.sin_family = AF_INET;
      local.sin_port = htons(port);
      local.sin_addr.s_addr = inet_addr(ip.c_str());//点分十进制IP转成整形ip，host -> net

      if(bind(sockfd, (struct sockaddr*)&local, sizeof(local)) == 0){
        std::cout << "server run on " << ip << " : " << port << " ... success." << std::endl;

      }else{
        std::cerr << "bind error..." << std::endl;
        exit(3);

      }

    }
    void Run()
    {
      std::vector<struct sockaddr_in> v;
      char buf[1024];
      struct sockaddr_in peer;
      for(;;){
        socklen_t len = sizeof(peer);
        ssize_t size = recvfrom(sockfd, buf, sizeof(buf)-1, 0, (struct sockaddr*)&peer, &len);
        if(size > 0){
          buf[size] = 0;
          std::string client_ip = inet_ntoa(peer.sin_addr);
          int client_port = ntohs(peer.sin_port);
          std::cout << client_ip << ":"<< client_port << " # "<< buf << std::endl;
          v.push_back(peer);
          std::vector<struct sockaddr_in>::iterator it = v.begin();
          for(; it != v.end(); it++){
            sendto(sockfd, buf, strlen(buf), 0, (struct sockaddr*)&(*it), len);

          }
          std::string cmd = buf;
          if(cmd == "ls"){
            if(fork() == 0){
              execl("/usr/bin/ls", "ls" ,"-al", NULL);
              exit(1);

            }
            wait(nullptr);

          }
          if(cmd == "vim"){
            if(fork() == 0){
              execl("/usr/bin/vim", "vim", NULL);
              exit(1);

            }
            wait(nullptr);

          }

        }

      }

    }
    ~Server()
    {
      if(sockfd >= 0){
        close(sockfd);

      }

    }

};
