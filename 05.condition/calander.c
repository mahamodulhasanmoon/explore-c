# include <stdio.h>

int main(void){
int day_number;
printf("day_number (1-7)\n");
scanf("%d",&day_number);

switch (day_number)
{
case 1:
    printf("saturday\n");
    break;
case 2:
    printf("sunday\n");
    break;
    case 3:
    printf("monday\n");
    break;
    case 4:
    printf("tuesday\n");
    break;
    case 5:
    printf("wednesday\n");
    break;
    case 6:
    printf("thursday\n");
    break;
    case 7:
    printf("friday\n");
    break;
default:
printf("invalid day number");
    break;
}

    return 0;
}