#include <stdio.h>
int main ()
// {
//     int rahim,karim;
//     char c;
//     float f;
//     scanf("%d %d %f %c", &rahim, &karim, &f, &c);
//     printf("%d\n%d\n%0.2f\n%c",rahim,karim,f,c);
//     return 0;
// }
{
    int a,b;
    //'%' take as an input we have to take a char type variable
    // char p;
    // scanf("%d%c %d%c",&a,&p,&b,&p);
    // //or we can use another way to take % as an input
    // scanf("%d%% %d%%",&a,&b);
    //one more way to take % as an input
    scanf("%da %db",&a,&b);
    // print the output using %
    printf("%da\n%db",a,b);

    return 0;
}