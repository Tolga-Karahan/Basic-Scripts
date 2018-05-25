#include <stdio.h>
#include <unistd.h>

int main(void){
	printf("A");
	fork();
	//fork();
	printf("B");
}
