#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
//#include <arpa/inet.h>

int main()
{
struct sockaddr_in addr1;
int fd1,rb,ra,len;
char buff[400],t[30]=" client says: Hello to server";

len=sizeof(addr1);
fd1= socket(AF_INET,SOCK_STREAM,0);

//struct sockaddr_in addr;
addr1.sin_family= AF_INET;
addr1.sin_port= htons(8080);
addr1.sin_addr.s_addr=inet_addr("127.0.0.1");

connect(fd1,(struct sockaddr *)&addr1,len);

send(fd1,t,strlen(t),0);

printf("Messsage sent");
read(fd1,buff,strlen(buff));
printf("Server says: %s",buff);

}
