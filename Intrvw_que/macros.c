
/* C code snippet */
#include<stdio.h>

#define max 100    //Macro defenition

void main()
{
	int var=100;

	if(max=100)		//Can't change macro definaton anywhere in the program, except macro body.
	{
		printf("No error\n");
	}
	else
	{
		printf("Compiler L lavalue error\n");
	}
}

