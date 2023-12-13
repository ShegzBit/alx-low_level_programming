#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int search(int *array, size_t start, size_t end, int value);
int exponential_search(int *array, size_t size, int value);
int ex_bin_search(int *array, size_t start, size_t end, int value);
void print_array(int *array, size_t size);
int inter_search(int *array, size_t low, size_t high, int value, size_t size);
int advanced_binary(int *array, size_t size, int value);
int ad_bin_search(int *array, size_t start, size_t end, int value, int result);


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

listint_t *jump_list(listint_t *list, size_t size, int value);

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

skiplist_t *linear_skip(skiplist_t *list, int value);
#endif /*__SEARCH_ALGOS__*/
