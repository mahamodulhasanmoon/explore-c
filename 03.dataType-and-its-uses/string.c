# include <stdio.h>

int main(void) {

// explore string values

char name[20] ;
name[0] = 'M';
name[1] = 'o';
name[2] = 'o';
name[3] = 'n';
name[4] = ' ';

// alternate way
char name1[20] = {'M', 'o', 'o', 'n', };

// short cut value literal way

char alterNative[21]="Mahamodul Hasan Moon";

// if you can prove it? 





printf("my Name is : %s\n", name);
printf("my Name is : %s\n", name1);
printf("my Name is : %s\n", alterNative);
// if you can prove it? 
printf("index 0 = %c\n", alterNative[19]);

//  now time to scan input

// but you can print only single word without spaces
char your_name[30];
printf("Enter your name : \n ");
scanf("%s", &your_name);
printf("thank you - %s\n", your_name);

    return 0;
}
