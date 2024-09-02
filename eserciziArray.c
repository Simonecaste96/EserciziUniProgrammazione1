#include <stdio.h>

#define SIZE 17

#define SIZE2 3

void printArray(char parametro[]);

void printArrayBidimensionale(int parametro[SIZE2][SIZE2]);


int main (void) {

char array [] = {"Mi chiamo Simone"}; //array di caratteri

int array2 [SIZE2][SIZE2] = {{1,2,3},{4,5,6},{7,8,9}}; //array bidimensionale

//printArray(array); // chiamo funzione per stampare array di caratteri

printArrayBidimensionale(array2); // chiamo funzione per stampare array bidimensionali

}

//funzione per array monodimensionale
void printArray (char parametro[]){

for (size_t i = 0; parametro[i] != '\0'; i++)
{
 printf("%c", parametro[i]);

}

}

//funzione per stamapre array bidimensionali
void printArrayBidimensionale (int parametro[SIZE2][SIZE2]){

  for (size_t i = 0; i < SIZE2; i++)
  {
    for (size_t j = 0; j < SIZE2; j++)
    {
     printf("%d\t", parametro[i][j]);  
    }
    printf("\n");
  }
    
}
