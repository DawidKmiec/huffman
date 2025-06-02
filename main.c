#include "tree.h"

#include <stdio.h>
int main(){
    /*
    huffman_list array;
    array.length = 0;
    array.start = NULL;
    
    char_buffer line = {"Hello this is a test of if it can count shit like this aaaaaaaaaaaaaaaaaaaaa testing"};    
    char_counter accumulator = {0};
    
    character_counter(&line, &accumulator);
    print_chars(&accumulator);

    push_accumulated_chars(&array, &accumulator);
    print_huffman_array(&array);

    huffman_node head = merge_huffman(&array);
    */

    int c = 2;
    for (size_t i = 0; i < 8; i++) {
        printf("bit #%zu: %i\n", c & 1);
        c >>= 1;
    }

}
