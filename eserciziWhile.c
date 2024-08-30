# include <stdio.h>



//esercizio 1
int esercizio1 (void){

unsigned int i = 1;

while( i <= 20){


i == 5 || i == 10 || i == 15 ? printf_s("%u\n", i++) : printf_s("%u\t", i++);


}

}

//esercizio 2

int esercizio2 (void){

unsigned int i = 1;

unsigned int sum = 0;

do
{
    
 i % 2 != 0 ? sum += i : sum;



} while ( i++ <=99);

printf_s("%u ", sum);

}

//main

int main (void) {

//esercizio1();

//esercizio2();


return 0;

}