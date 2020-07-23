#include<stdio.h>
int main()
{
	int ch=1;
    switch (ch+1, ch )//2,1
    {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2");
            break;
        }	
	return 0;
}
