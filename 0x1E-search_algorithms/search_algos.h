#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* 0-linear.c prototype */
int linear_search(int *array, size_t size, int value);

/* 1-binary.c prototype */
int binary_search(int *array, size_t size, int value);

/* 100-jump.c prototype */
int jump_search(int *array, size_t size, int value);

/* 102-interpolation.c prototype */
int interpolation_search(int *array, size_t size, int value);

/* 103-exponential.c prototype */
int exponential_search(int *array, size_t size, int value);

/* 104-advanced_binary.c prototype */
int advanced_binary(int *array, size_t size, int value);

/* 105-jump_list.c prototype */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* 106-linear_skip.c prototype */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
