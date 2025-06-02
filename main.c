#include "tree.h"

#include <stdio.h>
int main(){
    huffman_list array;
    array.length = 0;
    array.start = NULL;

    huffman_node * node1 = malloc(sizeof(huffman_node));
    node1->frequency = 5;
    
    huffman_node * node2 = malloc(sizeof(huffman_node));
    node2->frequency = 10;

    huffman_node * node3 = malloc(sizeof(huffman_node));
    node3->frequency = 30;

    huffman_node * node4 = malloc(sizeof(huffman_node));
    node4->frequency = 29;

    huffman_node * node5 = malloc(sizeof(huffman_node));
    node5->frequency = 1;

    huffman_list_push(&array, node1);
    huffman_list_push(&array, node2);
    huffman_list_push(&array, node3);
    huffman_list_push(&array, node4);
    huffman_list_push(&array, node5);

    print_huffman_array(&array);

    bubble_sort_array(&array);
    
    print_huffman_array(&array);
    
    if(check_ordered_list(&array) == true) {
        printf("In order\n");
    } else {
        printf("Not in order\n");
    }


    while(merge_huffman_iteration(&array) == true) {
        bubble_sort_array(&array);
        print_huffman_array(&array);
    }
    
}