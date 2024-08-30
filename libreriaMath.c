#include <stdio.h>

#include <math.h>

int main (void) {

double amount, capital = 1000;

double rate = 0.05;

printf_s("%4s", "Year");
printf_s("%21s\n", "Amount on deposit");

for (unsigned int i = 1; i<=10; i++) {

amount = capital * pow(1.0 + rate, i);

printf("%4u%21.2f\n", i, amount);

}

return 0;

}