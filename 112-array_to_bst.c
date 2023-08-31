#include "binary_trees.h"

/**
* array_to_bst - Builds a Binary Search Tree from an array
* @array: A pointer to the first element of the array
* @size: array sizw
*
* Return:
* - A pointer to the created BST (Success)
* - NULL (Failure)
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		bst_insert(&tree, array[i]);
	}
	return (tree);
}
