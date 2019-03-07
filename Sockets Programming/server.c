#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>

int main()
{
	int fd,rb,ra,len;
	fd= socket(AF_INET,SOCK_STREAM,0);

struct sockaddr_in addr;
struct in_addr adr;
adr.s_addr=inet_addr("192.168.10.10");

	addr.sin_family= AF_INET;
	addr.sin_port= htons(80);
	addr.sin_addr=adr;
len=sizeof(addr);
rb=bind(fd,(struct sockaddr *) &addr,len);

listen(fd,5);
accept(fd,(struct sockaddr *)&addr,len);
write(fd,"Welcome to Karthik web!!!",strlen("Welcome to Karthik web!!!"));

while (1);

}
