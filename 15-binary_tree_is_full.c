#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: A pointer to the root node of the tree
*
* Return: size (Success) or 0 (Failure)
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		size_left = binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		size_right = binary_tree_size(tree->right);
	}

	return (1 + size_left + size_right);
}


/**
* binary_tree_is_full - Checks if a binary tree is full
* @tree: A pointer to the root node of the tree
*
* Return: 1 (if full) or 0 (otherwise)
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((binary_tree_size(tree)) % 2 == 0)
		return (0);
	return (1);
}
