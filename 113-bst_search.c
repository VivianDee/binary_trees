#include "binary_trees.h"

/**
* bst_search - Searches for a value in a Binary Search Tree
* @tree: A pointer to the root node of the BST to search
* @value: The data to serch for in the binary search tree
*
* Return:
* - A pointer to the node containing the value (Success)
* - NULL (Failure)
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *check = NULL;

	if (!tree)
		return (NULL);
	check = tree;

	while (check)
	{
		if (value < check->n)
			check = check->left;
		else if (value > check->n)
			check = check->right;
		else
		{
			return ((bst_t *)check);
		}
	}

	return (NULL);
}
