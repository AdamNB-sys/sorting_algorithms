#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swapNode(listint_t **list, listint_t *node1, listint_t *node2);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_recursive(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void merge_sort(int *array, size_t size);
void merge_sort_recursion(int *array, int left, int right);
void merge_sorted_arrays(int *array, int left, int mid, int right);
void print_array_status(char *status, int *array, int size);
void heap_sort(int *array, int n);
void swap_element(int *a, int *b);
void heapify(int *array, int size, int i);

#endif
