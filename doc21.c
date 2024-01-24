#include <stdio.h>
int main() 
{ 
    int a;
    int b;
    int c;

    printf("inserisci primo lato");
    scanf("%d", &a);
    printf("inserisci secondo lato");
    scanf("%d", &b);
    printf("inserisci terzo lato");
    scanf("%d", &c);
    
    if( a+b>c && b+c>a && a+c>b)
    {
        printf("è un triangolo");
    }
    else
    { 
        printf("non è un traingolo");
    }
    

     if((a==b) && (b==c) && (c==a))
    {
        printf("il triangolo è equilatero");
    }
    else if((c==b) && (a!=c) && (a!=b) || (a==c) && (b!=c) && (b!=a) || (b==a) && (c!=a) && (c!=b))
    {
        printf(" il triangolo è isoscele");
    }
    else if((a!=b)&& (b!=c) && (c!=a))
    {
        printf("il triangolo è scaleno");
    }
    return(0);
}
