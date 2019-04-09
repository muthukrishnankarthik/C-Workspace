//create a file with permission

#include <fcntl.h>           /* Definition of AT_* constants */
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int fp,a;
a=(creat("f1.txt",0760)); printf("Value of a %d",a);

if(a==0)
printf("The file has been created successfully\n");

fp=(access("f1.txt",(X_OK)));
printf("\n Value of fp %d",fp);
if(fp==0)printf("\nThe file has execute permission");

//printf("%d",a);
return 0;
}
