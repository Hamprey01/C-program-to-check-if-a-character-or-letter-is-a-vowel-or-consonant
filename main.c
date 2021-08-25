#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int upperCase,lowerCase,notUpper,notLower;
    printf("check if a character or letter is a vowel or consonant");
    printf("\nEnter a alphabet:");
    scanf("%c", &c);

    lowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    

    if (lowerCase || upperCase){
            printf("%c is a vowel", c);
    }else if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
            printf("%c is not a vowel", c);
    }else {
         printf("Invalid Input", c);
    }


    return 0;
}
