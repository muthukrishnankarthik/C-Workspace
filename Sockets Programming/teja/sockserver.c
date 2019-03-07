#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/un.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include<arpa/inet.h>

int main()
{

struct sockaddr_in server,client;

int sockfd;
int clientfd;
char buff[100];
int rd;
int addrlen=sizeof(server);
sockfd=socket( AF_INET ,SOCK_STREAM ,0);
/*  struct sockaddr_in {
               sa_family_t    sin_family; // address family: AF_INET
               in_port_t      sin_port;   // port in network byte order
               struct in_addr sin_addr;   // internet address
           };
*/

//struct sockaddr_in server;
server.sin_family = AF_INET;
server.sin_port = htons(8021);
server.sin_addr.s_addr = INADDR_ANY ;



bind(sockfd, (struct sockaddr*)&server,sizeof(server));
listen(sockfd,5);
clientfd=accept(sockfd, (struct sockaddr*)&client,(socklen_t*)&addrlen);
while(1)
{

//listen(sockfd,5);

//clientfd=accept(sockfd, (struct sockaddr*)&client,(socklen_t*)&addrlen);

read(clientfd,buff,100);
printf("%s\n",buff);
//send(clientfd,"helloworld",10,0);
//printf("msg sent\n");
}
//close(sockfd);
return 0;
}
