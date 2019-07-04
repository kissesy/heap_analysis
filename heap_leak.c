#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	unsigned long long* a = (unsigned long long*)malloc(8); 
	unsigned long long* b = (unsigned long long*)malloc(8); 
	unsigned long long* c = (unsigned long long*)malloc(8); 
	free(c); 
	free(b); 
	read(0, a, 0xffff); 
	//printf("%s\n", *a);
	//printf("heap address : 0x%llx\n", *b);
	return 0; 
}
