#include <stdio.h>




int number1, number2; //dichiaro le variabili number1 e number2 usando , per separarle, in modo da dichiararle entrambe in una sola riga.


//ADDIZIONE

int addition(void){

printf("Inserire il primo numero");

scanf("%d", &number1);


printf("Inserire il secondo numero");

scanf("%d", &number2); //inserisco simbolo ampersand per far in modo che il valore ricevuto in input venga assegnato a qull'iindirizzo di memoria di questa variabile


int ris = number1 + number2;


return printf("Risultato: %d", ris);

}


//SOTTRAZIONE

int subtraction(void){

printf("Inserire il primo numero");

scanf("%d", &number1);


printf("Inserire il secondo numero");

scanf("%d", &number2); //inserisco simbolo ampersand per far in modo che il valore ricevuto in input venga assegnato a qull'iindirizzo di memoria di questa variabile


int ris = number1 -number2;


return printf("Risultato: %d", ris);

}


//MOLTIPLICAZIONE

int multiplication(void){

printf("Inserire il primo numero");

scanf("%d", &number1);


printf("Inserire il secondo numero");

scanf("%d", &number2); //inserisco simbolo ampersand per far in modo che il valore ricevuto in input venga assegnato a qull'iindirizzo di memoria di questa variabile


int ris = number1 * number2;


return printf("Risultato: %d", ris);

}

//DIVISIONE

int division(void){

printf("Inserire il primo numero");

scanf("%d", &number1);


printf("Inserire il secondo numero");

scanf("%d", &number2); //inserisco simbolo ampersand per far in modo che il valore ricevuto in input venga assegnato a qull'iindirizzo di memoria di questa variabile


int ris = number1 / number2;


return printf("Risultato: %d", ris);

}


//RESTO

int rest(void){

printf("Inserire il primo numero");

scanf("%d", &number1);


printf("Inserire il secondo numero");

scanf("%d", &number2); //inserisco simbolo ampersand per far in modo che il valore ricevuto in input venga assegnato a qull'iindirizzo di memoria di questa variabile


int ris = number1 % number2;


return printf("Risultato: %d", ris);

}



int main(void){

printf("\nSono tornato \nC non ti temo!\nPremi 1 per selezionare Addizione, 2 per Sottrazione, 3 per Divisione, 4 per Moltiplicazione, 5 per Resto");

int select;

scanf("%d", &select);

switch(select){

case 1:
 
addition();

main();

break;


case 2:

subtraction();

main();

break;


case 3:

multiplication();

main();

break;


case 4:

division();

main();

break;


case 5:

rest();

main();

break;


default:
            printf("Scelta non valida.\n");
main();

}

return 0;

}



