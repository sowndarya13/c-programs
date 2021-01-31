#include <stdio.h>

int main()
{
    char arr[20];
    printf("enter a string:");
    scanf("%[^\n]%*c",&arr);
    printf(arr);
    return 0;
}
