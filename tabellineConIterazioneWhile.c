# include <stdio.h>


int main (void) {

// inizializzo x ad 1, ad termine del ciclo while interno con condizione i <=10, x verra incrementata di 1, da notare che i è istanzata all' interno del ciclo while esterno, per tanto al riniziare del ciclo x, verra ripristinata ad 1, permettendo cosi di fare tutte le moltiplicazioni.
// 

unsigned int x = 1; 

while (x <= 10) {

unsigned int i = 1;    

while (i <= 10) {

printf_s ("%u\t", x * i);

i++;

}

printf( "\n");

x++;

}

}


