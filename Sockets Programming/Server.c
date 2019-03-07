#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 

int main()
{
	int fd,fd2,rb,ra,len;
	char  buf[200],html[200]="Message from server";
fd= socket(AF_INET,SOCK_STREAM,0);

struct sockaddr_in addr;
struct in_addr adr;
//adr.s_addr=atons("192.168.10.10");

	addr.sin_family= AF_INET;
	addr.sin_port= htons(8080);
	addr.sin_addr.s_addr=INADDR_ANY;

len=sizeof(addr);
rb=bind(fd,(struct sockaddr *)&addr,len);
while (1)
{
listen(fd,5);

if((fd2=accept(fd,(struct sockaddr *)&addr,(socklen_t *)&len)) >0 )
{
	printf("Request received from client: ");

 read( fd2 , buf, 1024);
 printf("%s\n",buf );

send(fd2,html,strlen(html),0);
}

}

}
