# include <stdio.h>

int main(){

    unsigned char a = 12;
    unsigned char b = 25;

 
    unsigned char c = a & b;

    printf("and operation - %d\n",c);

    // or operator 

        unsigned char d = a | b;

    printf("or operation - %d\n",d);
        // XOr operator 

        unsigned char e = a ^ b;

    printf("X-or operation - %d\n",e);

    // complement operator 
    
            unsigned char f = ~25;

    printf("complement operation - %d\n",f);

    // right Shift
unsigned char g = ~25;

    printf("rightSHift operation - %d\n",g);
    

    return 0;
}