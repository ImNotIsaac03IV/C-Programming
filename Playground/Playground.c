#include <stdio.h>

int main() 
{
    int num;
    printf("Choose an option: ");
    scanf_s("%d", &num);

    switch(num)
    {
        case 1:
            printf("Open menu\n");
            break;
        case 2:
            printf("Close menu\n");
            break;
        case 3:
            printf("Next page\n");
            break;
        default:
            printf("Non-existent\n");
            break;
    }
    return 0;
}
