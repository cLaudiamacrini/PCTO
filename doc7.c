#include <stdio.h>
int main() 
{ 
    int x;
    int y;
    printf("inserisci il primo numerop\n");
    scanf("%d", &x);
    printf("inserisci il secondo numero\n");
    scanf("%d", &y);
    if(x > y)
    { 
        printf("x è maggior di y\n");
    }
    else
    { 
        printf("y è maggiore di x\n");
    }
     return(0);
}

