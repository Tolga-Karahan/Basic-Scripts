#include <unistd.h>
#include <stdio.h>

int main(void){
	execl("/bin/ls", "ls", "-l", NULL);
}
