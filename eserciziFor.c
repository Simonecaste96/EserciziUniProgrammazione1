# include <stdio.h>


int main (void) {

 unsigned int count = 0;    

for (unsigned int i = 2; i <=100; i++){


    if (i % 2 == 0) {
        
        count += i;

       
    }
}

 printf_s("%u", count);


    return 0;
}