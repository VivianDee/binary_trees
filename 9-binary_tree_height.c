#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: A pointer to the root node of the tree
*
* Return: height (Success) or 0 (Failure)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		height_left = 1;
		height_left += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		height_right = 1;
		height_right += binary_tree_height(tree->right);
	}

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
