#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorts.h"




int *savemassiv(int *massiv, int sizeofmassiv)
{
    int *willbesorted = (int*)malloc(sizeofmassiv*sizeof(int));

    int i = 0, j = 0;

    for(i; i < sizeofmassiv; i++)
         willbesorted[i] = massiv[i];
    return willbesorted;

}
int main()
{
    int numofel = 0;
    int *massiv = NULL;
    printf("How many elemets do you want to sort?\n");
    scanf("%d",&numofel);
    
    do
    {
         massiv = (int*)malloc(numofel*sizeof(int));
         if(massiv == NULL) 
         {
             printf("We're sorry but your device can't create so large massive\n Please, change number of elements\n");
             scanf("%d",numofel);
             printf("\n");
         }
    } while(massiv == NULL);
    
    printf("Now we are getting a random massiv\nWe have %d elements",numofel);
    getmassiv(massiv, numofel);
    printmassiv(massiv,numofel);
    printf("Next, Let's sort it with 'Buble sort'");

    sortBuble(massiv,numofel);
    printf("As you can see, unsorted massiv are saved");
    printmassiv(massiv,numofel);
    printf("Next, Let's sort it with 'Past sort'");
    sortPast(massiv,numofel);

    return 0;
}
