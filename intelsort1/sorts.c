
void sortBuble( int * massiv, int sizeofmassiv)
{
    int *willbesorted = savemassiv(massiv,sizeofmassiv);
    int i = 0, j = 0;

    for(i = 0; i < sizeofmassiv-1; i++)
        for(j = i + 1; j < sizeofmassiv; j++)
            if( willbesorted[i] < willbesorted[j])
                myswap(&willbesorted[i], &willbesorted[j]);

    printmassiv(willbesorted,sizeofmassiv);
    free(willbesorted);

}
void sortPast(const int * massiv, int sizeofmassiv)
{
    int *willbesorted = savemassiv(massiv,sizeofmassiv);
    int i = 0, j = 0;

    for(i; i < sizeofmassiv -1; i++)
    {
        int min = willbesorted[i], num_of_min = i;
        for(j = i+1; j < sizeofmassiv; j++)
        {
            if(willbesorted[j] > min)
                {
                    num_of_min = j;
                    min = willbesorted[j];
                }
        }
        myswap(&willbesorted[i], &willbesorted[num_of_min]);
    }
    printmassiv(willbesorted,sizeofmassiv);

    free(willbesorted);
}
void printmassiv(const int * willbeprint, int sizeofmassiv)
{
        printf("\n\n");
        int i = 0;
        for(i; i < sizeofmassiv; i++)
            printf("%d ", willbeprint[i]);
        printf("\n\n");



}

void myswap(int* s1, int* s2)                             // checked
{
    int p;
    p = *s1;
    *s1 = *s2;
    *s2 = p;
}


void getmassiv(int * willbeget, int sizeofmassiv)       // checked
{
    int i = 0;

    for(i; i < sizeofmassiv; i++)
    {
        willbeget[i] = rand() % 125;
    }
}
