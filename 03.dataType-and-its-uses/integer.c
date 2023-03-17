# include <stdio.h>

int main(){

// sign int data 
printf("sign int data :\n");

short  a =455; // %d  %hi

printf("I am short - %hi\n",a);

int  b =4550; // %d  %hi
printf("I am int - %d\n",b);

long  c =185l; // %d  %hi
printf("I am long - %ld\n",c);

long long d =448415154111ll; // %d  %hi
printf("I am long long- %lld\n",d);

// octal and hex numbers

int octal = 0451; 
printf("I am octal - %o\n", octal);
// i  wanna decimal value 
printf("I am decimal of octal - %d\n", octal);

// hexadecimal 

int hex = 0x451acce; 
printf("I am hex - %X\n", hex);
// i  wanna decimal value 
printf("I am decimal of hex - %d\n", hex);

// unsigned integer
printf("unsigned integer :\n");

    return 0;
}