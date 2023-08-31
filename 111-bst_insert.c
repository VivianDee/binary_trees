#include "binary_trees.h"
#include <stdlib.h>

/**
* bst_insert - Inserts a value in a Binary Search Tree
* @tree: A double pointer to the root node of the BST to insert the value
* @value: The data to inserted in the binary search tree
*
* Return:
* - A pointer to the created node (Success)
* - NULL (Failure)
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = NULL, *new_node = NULL;
	if (!tree)
	{
		return (NULL);
	}

	new_node = (bst_t *)malloc(sizeof(bst_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!(*tree))
	{
		*tree = new_node;
		return (new_node);
	}

	current = *tree;
	while (current)
	{
		if (value < current->n)
		{
			if (current->left)
			{
				current = current->left;
			} else
			{
				current->left = new_node;
				new_node->parent = current;
				return (new_node);
			}
		} else if (value > current->n)
		{
			if (current->right)
				current = current->right;
			else
			{
				current->right = new_node;
				new_node->parent = current;
				return (new_node);
			}
		} else
		{
			free(new_node);
			return (NULL);
		}
	}

	return (NULL);
}
