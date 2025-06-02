#include <tree.h>

void character_counter(char_buffer* line, char_counter* counter) {
    char current_char;
    int i = 0;
    do { 
        current_char = line->buffer[i];
        counter->count[(int)current_char]++;
        i++;
    } while (current_char != '\0' && i < 256);
}

void print_chars(char_counter* counter) {
    for(int i = 0; i < 256; i++) {
        if (counter->count[i] != 0){
            printf("Letter %c - %d appearances\n", (char)i, counter->count[i]);
        }
    }
}

// make each appearance be noted, and push to the stack
void push_accumulated_chars(huffman_list* array, char_counter* counter) {
        for(int i = 0; i < 256; i++) {
        if (counter->count[i] != 0){
            // push to the stack
            huffman_node* temp = malloc(sizeof(huffman_node));
            temp->left = NULL;
            temp->right = NULL;
            temp->frequency = counter->count[i];
            temp->value = (char)i;
            
            huffman_list_push(array, temp);            
        }
    }
}

