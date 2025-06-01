#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*
#include "include.h"

typedef struct character_abundance{
    int appearances[256];
} character_abundance;

typedef struct line_buffer{
    char buffer[256];
} line_buffer;


void tallyAppearanceAtLine(character_abundance* initial_abundance, line_buffer current_line){ 
    char currentLetter;
    int i = 0;
    do {
        currentLetter = current_line.buffer[i];
    
        // casts the char to a int (0-256), adds 1 to the corresponding psace
        initial_abundance->appearances[(int)currentLetter]++;

        i++;
    } while (currentLetter != '\n' && i < 256);
}

character_abundance fullTallyAppearance(FILE* input_file) {
    line_buffer line;
    character_abundance total_abundance = {0};

    while(fgets(line.buffer, 256, input_file) != 0){
        tallyAppearanceAtLine(&total_abundance, line);
    }

    return total_abundance;
}

void printAbundance(character_abundance abundance){
    for (int i = 0; i<256; i++) {
        if (abundance.appearances[i] != 0)
        {
            printf("The character %c appeared %d many times", (char)i, abundance.appearances[i]);
        }
    }
}
*/