#include <stdio.h>
void cubo() 
{ 
    int numero;
    int cubo;

    printf("inserisci un numero");
    scanf("%d", &numero);
    cubo= numero*numero*numero;
    printf("il cubo del tuo numero è :%d\n", cubo);
}

int main()
{
    cubo();
    return(0);
}