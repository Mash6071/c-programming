#include <stdio.h>
int main()
{
    int Tk;
    printf("How much Taka You have?\n");
    scanf("%d", &Tk);
    if (Tk >= 100)
    {
        printf("I will eat Burger\n");
    }
    else
    {
        printf("I won't eat anything\n");
    }

    return 0;
}