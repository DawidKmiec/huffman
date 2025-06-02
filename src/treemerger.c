
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

bool merge_huffman_iteration(huffman_list* array) {
    if (array->length <= 1){
        return false;
    }

    huffman_node * temp = malloc(sizeof(huffman_node));
    temp->left = array->start[array->length-2];
    temp->right = array->start[array->length-1];

    temp->frequency = ((int)array->start[array->length-1]->frequency + (int)array->start[array->length-2]->frequency);

    realloc(array->start, (array->length-1)*sizeof(huffman_node*));
    if(array->start == NULL){
        abort();
    }

    array->length--;
    array->start[array->length-1] = temp;

    return true;
}

huffman_node merge_huffman(huffman_list* array) {
    do {
        bubble_sort_array(array);
        // print_huffman_array(array);
    } while(merge_huffman_iteration(array) == true);

    return *(array->start[0]);
}
