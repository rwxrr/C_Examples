#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>


int main()
{
    // input char

    char character;
    int uzunluk=strlen(vowels);
    printf("---- To vowel or not vowel: \n ");
    scanf("%c",&character);

    if(character=='a' || character=='e' || character=='o' || character=='i' || character=='u')
        puts("It's vowel :)");
    else
        puts("It's not vowel :)");




    return 0;
}
