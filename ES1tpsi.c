#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main (void){
        
       
        
        unsigned int bl = 1;
        
        unsigned char *byte_ptr = ( unsigned char*)&bl;
        
        unsigned int num = 12756;
        
        unsigned char *ptr_byte = (unsigned char*)&num;
        
        printf("%d\n",num);
        int i;
        
        for(i= 0; i < sizeof(num); i++){
            printf("Byte %d: valore = %d  , indirizzo e'%p ",i,ptr_byte[i],&ptr_byte + i);
        }
        if(byte_ptr[0] == 1){
            printf("L'architettura e' Little endian\n");
        }
        else{
            printf("L'architettura e' Big endian\n");
        }
    }

