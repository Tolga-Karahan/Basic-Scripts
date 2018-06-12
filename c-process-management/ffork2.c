#include <stdio.h>
#include <unistd.h>

int main(void){

	printf("Parent ready to fork\n");

	if(!fork())
		printf("I'm the child process\n");
}
	
