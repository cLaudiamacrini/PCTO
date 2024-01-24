#include <stdio.h>
int main() 
{ 
    int x;
    int y;
    int operazione;
    printf("inserisci il primo numero");
    scanf("%d", &x);
    printf("inserisci il secondo numero");
    scanf("%d", &y);
    printf("che operazione vuoi fare?");
    printf("premere 1 per addizione || 2 per sottrazione || 3 per moltiplicazione || 4 per divisione ");
    scanf("%d", &operazione);
    if (
        operazione ==1)
    {
        