#include <stdio.h>
int main() 
{ 
    int x;
    int y;
    int z;
    int k;
    int w;
    printf("primo numero");
    scanf(" %d", &x);
    printf("secondo numero");
    scanf(" %d", &y);
    printf("terzo numero");
    scanf(" %d", &z); 
    
    k= x-y;
    w= y-z;
    
    if(k==w)
    {
        printf("sono in progressione aritmetica");
    }
    else
    {
        printf("non sono in progressione aritmetica");
    }

      return(0);
}
