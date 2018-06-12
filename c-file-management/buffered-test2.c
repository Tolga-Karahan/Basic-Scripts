#include <stdio.h>
#include <unistd.h>

int main(void){
	printf("abc");
	fork();
	printf("def");
	fork();
	write(1, "ghi", 3);
}
	
