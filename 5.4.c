//5.Write a C program that takes a word and a sentence stored in an array of pointers and checks if the word exists in the sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200], word[50];

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter word to search: ");
    scanf("%s", word);

    // check word
    if (strstr(sentence, word) != NULL)
        printf("Word found");
    else
        printf("Word not found");

    return 0;
}