#include<stdio.h>
int main()
{
    switch (printf("Do"))//Do 
    {
        case 1:
            printf("First\n");
            break;
        case 2:
            printf("Second\n");
            break;
        default:
            printf("Default\n");
            break;
    }
    return 0;
}
