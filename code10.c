#include<stdio.h>
int main()
{
	int a=0,b=5;
	if(a++ && ++b)//if(0)
	{
		printf("if: %d %d",a,b);
	}
	else
	{
		printf("else: %d %d",a,b);//1 5
	}
	return 0;
}
