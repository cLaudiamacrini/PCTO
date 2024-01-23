#include <stdio.h>
int main() 
{ 
    int x;
    int z;
    int y;
    
    printf("inserisci primo lato g");
    scanf("%d", &x);
    printf("inserisci secondo lato");
    scanf("%d", &z);
    printf("inserisci terzo lato");
    scanf("%d", &y);

    if( x+z>y && z+y>x && x+y>z)
    {
        printf("è un triangolo");
    }
    else
    { 
        printf("non è un traingolo");
    }
      return(0);
}
