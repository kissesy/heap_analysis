#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	unsigned long long chunk_size = 0x21; //0x20 + P_flag ( 1 ) 
	unsigned long long* a = (unsigned long long*)malloc(0);
	unsigned long long* b = (unsigned long long*)malloc(0);
    //int* e = (int*)malloc(0);
	printf("%p %p\n", a, b);	
	
	free(b); 
	free(a); 

	unsigned long long* c = (unsigned long long*)malloc(0);
	printf("%p\n",c);
	//printf("%d\n",sizeof(b)); // 8 byte
	//read(0, c, 0xffff);  //&chunk_size 
	*b = (unsigned long long)(((char*)&chunk_size) - sizeof(b)); 
	unsigned long long* d = (unsigned long long*)malloc(0); 
	printf("addr : %p\n", d);
	//printf("addr : %p\n",malloc(0));	
	unsigned long long* f = (unsigned long long*)malloc(0); 
	*f = 3; 
	printf("%p : %lld\n",f, *f);
	//printf("stack addr : %p\n", &chunk_size);
	return 0;
}

