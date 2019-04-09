//access system call

#include <fcntl.h>           /* Definition of AT_* constants */
#include <unistd.h>


int main()
{

	int  ret;
	
	ret=access("f1.txt",F_OK);
	perror("result");
	printf(" The value is %d \n",ret);

return 0;

}
