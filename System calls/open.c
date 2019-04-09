// USING OPEN SYSTEM CALL 

#include <fcntl.h>           /* Definition of AT_* constants */
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int fp,a;

fp=(open("open.txt",O_CREAT,S_IRWXU));/* Note this statement. 
The mode value(3rd parameter) is passed when the flag value is set to O_CREAT. Else it can be used only as 2 argument function*/

printf("\n Value of file descriptor is:  %d",fp);

	int  ret;
	
	ret=access("f1.txt",F_OK);
	if(ret==0) // test for file exists
	printf(" The file exists %d \n",ret);

//printf("%d",a);
return 0;
}