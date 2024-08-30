#include <stdio.h>

int sentinella = -1; // sentinella che mi permette di uscire dal ciclo while

unsigned int sommaNumeri = 0; // somma dei numeri che verra incrementata, partendo da 0

unsigned int numeroInput; //numeri che ricevero in input dall'utente, non cessita l'iniziliazzione a 0

unsigned int contatore = 1;

int main(void){

while (numeroInput != sentinella) {

printf("Inserire un numero per cominciare a sommare, inserire -1 per terminare il programma\n");

printf("Numero %d: ", contatore);

scanf("%d",&numeroInput);


if (numeroInput != sentinella) {
    
	sommaNumeri += numeroInput;
    
    contatore++;
} 

else {
 
    sommaNumeri % 2 == 0 ? printf("Programma terminato, somma totale: %u, cifra pari", sommaNumeri) : printf("Programma terminato, somma totale: %u, cifra dispari", sommaNumeri);

    break; // interrompo il ciclo se arriva come input -1
}


}

return 0;

}