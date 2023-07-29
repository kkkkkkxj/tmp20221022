#include <stdio.h>
#include <pthread.h>

int main()
{
	pthread_t tid;
	pthread_create(&tid, NULL, jobs, NULL);
	printf("master thread create thread success..\n");
	return 0;
}
