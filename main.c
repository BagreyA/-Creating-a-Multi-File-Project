#include "header.h"

int main(void){
    int n;
    srand (time(NULL));
    printf ("Сколько рандомных параллел N =");
    scanf ("%d", &n);
    printf ("\n");
    struct paral y[n];
  
    for (int i = 0; i < n; i++){
        y[i] = ran();
    }
    ver(y, n);

return 0;
}
