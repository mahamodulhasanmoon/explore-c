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

// unsigned short 

unsigned short us = 25;
printf("unsigned short- %hu :\n",us);

// unsigned integer

unsigned int ui = 0;
printf("unsigned short- %u :\n",ui);
// unsigned integer

unsigned long  ul = 415185;
printf("unsigned long- %lu :\n",ui);
// long data 
unsigned long  ull = 415185;
printf("unsigned long- %llu :\n",ull);

// if i print as a negative number

unsigned short uiNegative = -2;
printf("negative- %hu :\n",uiNegative);

    return 0;
}

// binary value of -2

// 0000000000000010

// oposit number 

// 111111111111101 complement of one 

//               +1
//----------------------
  // 1111111111111110   negitive value of two 

//   if i wanna decimal number 
//  so output is being - 65534 

