#include <stdio.h>
int main() 
{ 
    int x;
    int y;
    printf("a quanti anni puoi prendere la patente nel tuo stato?");
    scanf( "%d", &x);
    printf("quanti anni hai?");
    scanf("%d", &y);
    if(y>=x)
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf("non puoi prendere la patente");
    }


    return(0);
}

