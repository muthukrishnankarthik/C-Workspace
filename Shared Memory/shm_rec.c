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

	shm_id=shmget(mykey,SHM_SIZE,IPC_EXCL|0666);
	perror("Error:");
	ptr=(char*)shmat(shm_id,NULL,0); // registering the shared memory and establishing connection

	printf("Mapped address : %u \n",ptr);
	printf("The value store is %c \n",*ptr);

	shmdt(ptr);//shared memory queued for detaching
	shmctl(shm_id,IPC_RMID,NULL);
	

}
