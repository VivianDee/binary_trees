#include "binary_trees.h"

/**
* binary_tree_rotate_right - Performs a right-rotation on a binary tree
* @tree: A pointer to the root node
*
* Return: new root node (Success) or NULL (Failure)
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *child = NULL;

	if (!tree || !tree->left)
		return (NULL);

	child = tree->left;
	temp = child->right;
	child->right = tree;
	tree->parent = child;
	tree->left = temp;
	if (temp)
		temp->parent = tree;

	return (child);
}
