#include <stdio.h>

unsigned int i = 1; // contatore x iterazione

int voto; // variabile per acquisire voto

int totaleVoti = 0; // totale somma dei voti;


int media (void) {

while ( i <= 10) {

printf("Inserire voto %d: ", i);

scanf("%d", &voto);

totaleVoti += voto;

i++;

}

int mediaVoti = totaleVoti / i;

printf("La media totale dei voti è: %d\n", mediaVoti);

}


int main (void){

media();

}