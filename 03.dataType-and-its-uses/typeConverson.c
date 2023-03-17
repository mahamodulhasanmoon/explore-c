# include <stdio.h>

int main() {
    // type conversion

    // implicit conversion
    char ch = 'a';
    char r= (int)ch +20;
    printf("%c %d %x\n", ch,ch,ch);
    printf("%c %d %x\n", r,r,r);

    return 0;
}
