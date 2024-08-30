// devo utilizzare un metodo ricorsivo per ricreare il problema della torre di hanoi, so che ci sono 3 pioli e devo spostare in ordine decrescente i dischi all'iterno del piolo 1 al piolo 2, usando come supporto temporaneo il piolo 3.

#include <stdio.h>

// prototipo di funzione

void metodoRicorsivo(unsigned int discoDaSpostare, unsigned int pioloOrigine, unsigned int pioloTemporaneo, unsigned int pioloFinale);

int main(void) {

unsigned int disco;

printf_s("Inserire i dischi da spostare");

scanf("%u",&disco);

metodoRicorsivo(disco, 1, 2, 3 );  // piolo 1, piolo 2 , piolo 3


    
}

// funzione ricorsiva
//i dischi sono intesi come interi (discoDaSpostare), il disco 1 sarà il più piccolo e così via a salire,
void metodoRicorsivo(unsigned int discoDaSpostare, unsigned int pioloOrigine, unsigned int pioloTemporaneo, unsigned int pioloFinale) {

  if(discoDaSpostare == 1) {

   printf("Disco 1 spostato dal piolo %u spostato su --> %u\n", pioloOrigine, pioloFinale); // ritorna alla funzione chiamante il valore 1
   
   return;

  }

  else {
   
   metodoRicorsivo (discoDaSpostare -1, pioloOrigine, pioloFinale, pioloTemporaneo);
   
   printf("Sposto il disco %u dal piolo %u al piolo %u\n", discoDaSpostare, pioloOrigine, pioloFinale);

        // Passo 3: Sposta i n-1 dischi dal piolo temporaneo al piolo finale
        metodoRicorsivo(discoDaSpostare - 1, pioloTemporaneo, pioloOrigine, pioloFinale);
  }

}