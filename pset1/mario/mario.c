#include <stdio.h>
#include <cs50.h>

int main(void) {

    int height = get_int("Height: ");
    if (height < 1 || height > 8) {
        do {
            height = get_int("Incorrrect number, please insert a number from 1 to 8: ");
        } while (height < 1 || height > 8);
    }

    for (int i = 1; i <= height; i++) {
        // Define first's spaces
        for (int j = height - i; j > 0; j--){
            printf(" ");
        }

        // Define the left side
        for (int k = i; k > 0; k--) {
            printf("#");
        }

        // Space between two sides
        printf("  ");

        // Define the right side
        for (int l = i ; l > 0; l--) {
            printf("#");
        }

        printf("\n");
    }

}