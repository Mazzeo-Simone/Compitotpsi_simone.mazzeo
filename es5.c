#include<stdio.h>

int main(void){

        int a = 5;
        a++;
        int *pa;
        printf("a vale %d, a e' all'indirizzo di memoria %p\n", *pa, pa);


        // iterare il vettore con un puntatore
        int b[5] = {1,2,3,4,5};
        while(b<&b[5]){
                printf("%d\t", *b);
                
        }
        printf("\n");

        // sostiuire in c la stringa miao
        char c[5] = "ciao";
       
        printf("%s\n", c);

        // sostituire in d la stringa miao
        char *d = "ciao";
        d[0] = 'm';
        printf("%s\n", d);

}
