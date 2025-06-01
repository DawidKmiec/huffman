#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct huffman_node huffman_node;

struct huffman_node{
    huffman_node* left;
    huffman_node* right;
    int frequency;
    char value;
};

typedef struct huffman_list{
    huffman_node** start;
    size_t length;
} huffman_list;

void huffman_list_push(huffman_list* array, huffman_node* node_added);

bool check_ordered_list(huffman_list* array);

void bubble_sort_iteration(huffman_list* array);

void print_huffman_array(huffman_list* array);

void bubble_sort_array(huffman_list* array);