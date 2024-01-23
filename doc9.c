#include <stdio.h>
int main() 
{ 
    int x;
    int y;
    printf("inserire il primo numero");
    scanf("%d", &x);
    printf("inserire il secondo numero");
    scanf("%d", &y);
    if(x%y== 0)
    {
        printf("è un multiplo");
    }
    else
    {
        printf("non è un multiplo");
    }
    return(0);
}
