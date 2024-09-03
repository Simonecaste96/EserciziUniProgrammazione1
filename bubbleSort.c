#include <stdio.h>

//prototipo
void bubbleSort(int * const array);

int main (void) {

int container[] = {89,16,12,34,1,23,4,45,62};

puts("Contenitore dei numero originale");

for (size_t i = 0; i < sizeof(container) / sizeof(container[0]); i++)
{
    printf("%4d", container[i]);


}


bubbleSort(container);


puts("\nContenitore dei numeri in ordine crescente");
    for (size_t i = 0; i < sizeof(container) / sizeof(container[0]); i++)
{
    printf("%4d", container[i]);


}


    return 0;
}


 void bubbleSort(int* const array){
    

    void swap ( int *index1Ptr, int *index2Ptr);

for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++)
{
   if(array[i] > array[i+1]){

    swap(&array[i], &array[i+1]);

   }
}


 }

void swap ( int *index1Ptr, int *index2Ptr){
   int hold = *index1Ptr;
   *index1Ptr = *index2Ptr;
   *index2Ptr = hold;

   }