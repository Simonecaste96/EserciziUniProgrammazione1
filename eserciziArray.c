#include <stdio.h>
#define SIZE 17


void printArray(char parametro[]);


int main (void) {

char array [] = {"Mi chiamo Simone"};

printArray(array);
}

void printArray (char parametro[]){

for (size_t i = 0; i < SIZE; i++)
{
 printf("%c", parametro[i]);
}


}