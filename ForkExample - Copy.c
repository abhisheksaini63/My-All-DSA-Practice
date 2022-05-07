#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include <sys/types.h>
int main()

{
	if(fork() && fork())
	  fork();
	
	printf("Abhishek\n");
	return 0;
}
