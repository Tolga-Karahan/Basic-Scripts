#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	fprintf(stdout, "12345");
	fork();
	fprintf(stderr, "12345");
}
