#include "binary_trees.h"
#include <stdlib.h>

/**
* bst_remove - Removes a node from a Binary Search Tree
* @root: A pointer to the root node of the BST
* @value: The data to remove for in the binary search tree
*
* Return:
* - A pointer to the node containing the value (Success)
* - NULL (Failure)
*/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (root == NULL)
		return (root);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}

		temp = root->right;
		while (temp && temp->left != NULL)
			temp = temp->left;

		root->n = temp->n;

		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
