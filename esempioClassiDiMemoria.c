// Programma C
// Verifica del campo d'azione delle variabili.
#include <stdio.h>

void useLocal(void); // prototipo di funzione

void useStaticLocal(void); // prototipo di funzione
void useGlobal(void);      // prototipo di funzione

int x = 1; // variabile globale

int main(void)
{
    int x = 5; // variabile locale per main

    printf("local x in outer scope of main is %d\n", x);

    {              // inizio di un nuovo campo d'azione
        int x = 7; // variabile locale nel nuovo campo d'azione

        printf("local x in inner scope of main is %d\n", x);
    } // fine del nuovo campo d'azione

    printf("local x in outer scope of main is %d\n", x);

    useLocal();       // useLocal ha una x locale automatica
    useStaticLocal(); // useStaticLocal ha una x locale statica
    useGlobal();      // useGlobal usa una x globale
    useLocal();       // useLocal reinizializza una x locale
    useStaticLocal(); // x locale statica conserva il valore
    useGlobal();      // la x globale conserva pure il suo valore

   //ristampo valore della variabile globale definita all'inizio del programma
    printf("\nlocal x in main is %d\n", x);
}

// reinizializza la variabile locale x durante ogni chiamata
void useLocal(void)
{
    auto int x = 25; // inizializzata ogni volta

    printf("\nlocal x in useLocal is %d after enter useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

// inizializza la variabile statica locale x solo la
// prima volta che la funzione e' chiamata; il valore di x e'
// conservato tra una chiamata e l'altra a questa funzione
void useStaticLocal(void)
{
    // inizializza x solo una volta
    static int x = 50;

    printf("\nlocal static x is %d on entering useStaticLocal\n", x);

    ++x;

    printf("local static x is %d on exiting useStaticLocal\n", x);
}

// useGlobal modifica la variabile globale x in ogni chiamata
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}
