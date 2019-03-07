// shared memory sample 1 shmget

#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<stdio.h>


#define SHM_SIZE 27
key_t mykey=5678;

int main()
{
	int shm_id; char *ptr;

	shm_id=shmget(mykey,SHM_SIZE,IPC_CREAT|IPC_EXCL|0666);
	perror("Error:");
	ptr=(char*)shmat(shm_id,NULL,0); // registering the shared memory
	
	printf("Mapped address : %x",ptr);
	*ptr='a';
	printf("after setting \n");
	while(1); // to keep the process running for the client program to fetch the data


}
