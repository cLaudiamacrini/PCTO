#include <stdio.h>
int main() 
{ 
    int x;
    
    
    printf("in che anno sei nato?");
    scanf("%d", &x);
    int y= 1969-x;
    int z= x-1969;
    if (x==1969)
    {
        printf( "sei nato nell'anno in cui l'uomo è atterrato sulla luna \n");
    }
    else if(x>1969)
    {
        printf("sei nato %d dopo l'anno dell'atterraggio dell'uomo sulla luna \n",y );
    }
    else if(x<1969)
    {
        printf("sei nato %d prima dell'anno dell'atterraggio dell'uomo sulla luna \n", z);
    }
    return(0);

}

