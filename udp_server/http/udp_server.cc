#include "udp_server.hpp"

void Usage(std::string _port)
{
      std::cout << _port << " ip port" << std::endl;

}
int main(int argc, char *argv[])
{
  if(argc != 3){
            Usage(argv[0]);
                    exit(1);
                        
  }
      Server *sp = new Server(argv[1], atoi(argv[2]));
          sp->InitServer();
              sp->Run();
                  return 0;

}

