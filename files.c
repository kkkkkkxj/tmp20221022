#include <stdio.h>
#include <pthread.h>

int main()
{
	int err;
	pthread_create(&tid, NULL, jobs, NULL);
	if((err = pthread_create(&tid, NULL, jobs, NULL)) > 0)
	{
		printf("thread create failed.\n", strerror(err));
	}
	printf("new create thread..\n");
	return 0;
}
