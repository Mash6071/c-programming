#include <stdio.h>
int main()
{
    int Tk;
    scanf("%d", &Tk);
    if (Tk >= 5000)
    {
        printf("I will go to Cox's Bazar\n");
    if( Tk >= 10000)
    {
        printf("I will go to Saint Martin from there\n");
    }
    else
    {
        printf("I will comeback from there\n");
    }
    }
    else
    {
        printf("I won't go anywhre\n");
    }

    return 0;
}