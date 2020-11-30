#include "udp_client.hpp"
void Usage(std::string _proc)
{
      std::cout << _proc << " server_ip server_port" << std::endl;

}
int main(int argc, char *argv[])
{
  if(argc != 3){
            Usage(argv[0]);
                    exit(1);
                        
  }
      Client *cli = new Client(argv[1], atoi(argv[2]));
          cli->InitClient();
              cli->Run();
                  return 0;

}

