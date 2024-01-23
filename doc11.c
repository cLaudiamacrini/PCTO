#include <stdio.h>
int main() 
{ 
    int b;
    printf("inserisci anno");
    scanf("%d", &b);

    if(b%4==0 || b%400==0 && b%100!=0)
    {
        printf("bisestile");
    }
    else
    {
        printf("non bisestile");
    }
    
    int c;
    printf("inserisci anno");
    scanf("%d", &c);

    if("c%400==0 || c%4==0 &&%100!=0")
    {
        printf("bisestile");
    }
    else
    {
        printf("non bisestile");
    }
    return(0);
}
