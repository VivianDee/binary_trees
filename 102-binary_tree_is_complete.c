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



/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: A binary tree
*
* Return: 1 (if complete) 0 (Otherwise)
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int height = 0, size = 0, calculated_size = 0, check = 0;

	height = binary_tree_height(tree);
	calculated_size = (1 << (height + 1)) - 1;
	check = (1 << (height + 1 - 1)) - 1;

	size = binary_tree_size(tree);

	if (calculated_size == size)
		return (1);
	else if ((check + 1) == size)
		return (1);
	return (0);
}
