#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sentence[100];

    // Read a character
    scanf("%c", &ch);

    // Read a string
    scanf("%s", s);

    // Read a sentence
    scanf(" %[^\n]%*c", sentence);

    // Print the results
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}
