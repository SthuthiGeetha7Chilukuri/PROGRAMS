
/* Endianness refers to how processor store data 1. Littile endian 2.Big endian*/
#include<stdio.h>

void main()
{

	unsigned short int val=0x1234;
	unsigned char *ptr=(unsigned char *)&val;

	if(ptr[0]==0x34)
	{
		printf("big endian system\n");
	}
	else
	{
		printf("littile endian system\n");
	}
}
