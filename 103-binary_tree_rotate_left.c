#include "binary_trees.h"

/**
* binary_tree_rotate_left - Performs a left-rotation on a binary tree
* @tree: A pointer to the first node
*
* Return: new root node (Success) or NULL (Failure)
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *child = NULL;

	if (!tree || !tree->right)
		return (NULL);

	child = tree->right;
	temp = child->left;
	child->left = tree;
	tree->parent = child;
	tree->right = temp;
	if (temp)
		temp->parent = tree;

return (child);
}
