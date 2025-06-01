
#include "tree.h"

void huffman_list_push(huffman_list* array, huffman_node* node_added) {
    array->length++;

    array->start = realloc(array->start,  sizeof(huffman_node*) * (array->length));
    if (array->start == NULL) {
        abort();
    }

    array->start[(array->length)-1] = node_added;
}

bool check_ordered_list(huffman_list* array) {
     for (int i = 0; i < (array->length-1); i++){
        if (array->start[i]->frequency < array->start[i+1]->frequency){
            return false;
        }
    }
    return true;
}

void bubble_sort_iteration(huffman_list* array) {
    
    huffman_node * temp;

    for (int i = 0; i < (array->length-1); i++){
        if (array->start[i]->frequency < array->start[i+1]->frequency) {
            temp = array->start[i];
            array->start[i] = array->start[i+1];
            array->start[i+1] = temp;
        }
    }
}

void bubble_sort_array(huffman_list* array) {
    while(check_ordered_list(array) == false){
        bubble_sort_iteration(array);
    }
}

void print_huffman_array(huffman_list* array) {
    for (int i = 0; i < (array->length); i++){
        printf("%d ", array->start[i]->frequency);
    }
    printf("\n");
}