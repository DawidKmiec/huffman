typedef struct character_abundance{
    int appearances[256];
} character_abundance;

typedef struct line_buffer{
    char buffer[256];
} line_buffer;

character_abundance fullTallyAppearance(FILE* input_file /*read only*/);

void printAbundance(character_abundance abundance);