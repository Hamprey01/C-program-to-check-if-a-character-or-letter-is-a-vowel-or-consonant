#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int upperCase,lowerCase;
    printf("check if a character or letter is a vowel or consonant");
    printf("\nEnter a alphabet:");
    scanf("%c", &c);

    lowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowerCase || upperCase){
            printf("%c is a vowel", c);
    }else{
            printf("%c is a consonant", c);
    }


    return 0;
}
