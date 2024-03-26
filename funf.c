#include "header.h"

struct paral ran(){
    struct paral x;
        x.a = rand()%10;
        x.b = rand()%10;
        x.h = rand()%10;
    return x;
}
void ver(struct paral y[], int n)
{
    double v = 0, min = 9999;
    int un = 0;
    
for (int i = 0; i < n; i++)
    {
        printf ("%d\n", i);
        printf("a= %f\n", y[i].a);
        printf("b= %f\n", y[i].b);
        printf("h= %f\n", y[i].h);
        v = (y[i].a * y[i].b * y[i].h);
        printf ("v= %f\n\n", v);
        if (v < min) 
         {
            min = v;
            un = i;
         }
    }
    printf ("Вывод программы\n");
    printf ("Минимальный объем параллел %f\n", min);
    printf ("Номер параллел: %d\n", un );
}
