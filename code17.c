#include<stdio.h>
int main()
{
    int a=9, b,c;
    
    b = (a==9) ? (a=5,c=1,100) :10 ;//a=5 c=1,100
    printf("%d",b);
    return 0;
}
