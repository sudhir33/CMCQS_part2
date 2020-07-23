#include<stdio.h>
int main()
{
	int a=10,b=5;
	if(a++ || ++b)//if(1)
	{
		printf("if: %d %d",a,b);//11,5
	}
	else
	{
		printf("else: %d %d",a,b);
	}
	return 0;
}
