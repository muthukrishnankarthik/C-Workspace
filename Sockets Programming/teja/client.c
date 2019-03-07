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
int sockfd;
int skfd=socket(AF_INET,SOCK_STREAM,0);
struct sockaddr_in client;
char buff[1024];


/*  struct sockaddr_in {
               sa_family_t    sin_family; // address family: AF_INET
               in_port_t      sin_port;   // port in network byte order
               struct in_addr sin_addr;   // internet address
           };
*/

//struct sockaddr_in server;
client.sin_family = AF_INET;
client.sin_port = htons(8021);
client.sin_addr.s_addr = inet_addr("192.168.101.67") ;
//while(1)
//{
connect(skfd,(struct sockaddr*)&client,sizeof(client));
while(1){
//printf("msg to sever:\n");
scanf("%s",buff);
//send(skfd,"helloworld",10,0);
send(skfd,buff,strlen(buff),0);
//read(sockfd,buff,30);
//printf("%s\n",buff);
}
return 0;
}
