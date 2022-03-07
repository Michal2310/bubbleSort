#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {0,1,3,1,6,2,3,5,1,5,2,11,12,15,14};
    bubbleSort (tablica);                // wywolanie funkcji bubbleSort sortujacej nasza tablice
    for(int x = 0; x < 15 ; x++){
        printf("%d", tablica[x]);        // drukowanie liczb tablicy
    }

    return 0;
}
void bubbleSort (int tablica[]){
int i, j, k;                             // deklaracja zmiennych
for(i = 0; i<14;i++){                    // petla przechodzaca przez nasza tablice
        for(j=0;j<15-i-1;j++){
            if(tablica[j]>tablica[j+1]){ // warunek sprawdzaj¹cy czy aktualnie wybrany element jest wiekszy od kolejnego
                k = tablica[j];          // przypisanie wartosci elementu tablicy do zmiennej k
                tablica[j]=tablica[j+1]; // zamiana elementu kolejnym elementem z tablicy
                tablica[j+1] = k;        // zamiana kolejnego elementu tablicy przez element aktualnie wybrany
            }
        }
    }
}
