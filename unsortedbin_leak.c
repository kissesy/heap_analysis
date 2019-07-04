#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long long* ptr1 = (unsigned long long*)malloc(128); 
	unsigned long long* ptr2 = (unsigned long long*)malloc(128);

	free(ptr1); 
	printf("library base address : 0x%llx\n", *ptr1 - 0x3c4b20 - 88);
	return 0;
}
