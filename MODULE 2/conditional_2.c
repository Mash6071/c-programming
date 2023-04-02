#include <stdio.h>
int main()
{
    int Tk;
    scanf("%d", &Tk);
    if (Tk >= 100)
    {
        printf("I will eat Burger\n");
    }
    else if (Tk>=50)
    {
        printf ("I will eat Fuchka");
    }
    else
    {
        printf("I won't eat anything\n");
    }

    return 0;
}