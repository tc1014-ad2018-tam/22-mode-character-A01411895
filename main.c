//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that shows the mode character (the most repeted character) of any given string.  Discard spaces.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    //Create a string with a fixed number of characters.
    char string[1000];

    //Create a mode variable to store characters with null in it.
    char mode = '\0';

    //Variable that counts how many times a character was repeated.
    int repeats = 0;

    //Request the user a string.
    printf("Please write anything(note that in this case, spaces don't count as characters): \n");
    fgets(string, sizeof(string), stdin);

    //For loop that will go through all the string and increase a counter if a character is repeated.
    for (int i = 0; i < strlen(string) - 1 ; i++) {
        int count = 0;

        for (int j = i + 1; j < strlen(string); j++) {
            if (string[i] == string[j] && string[i] != ' ') {
                count++;
            }
        }
        if (count > repeats) {
            repeats = count;
            mode = string[i];
        }
    }


    printf("The character that repeats the most in you phrase is %c, repeating itsealf a total of %i times.", mode, repeats + 1);

    return 0;
}