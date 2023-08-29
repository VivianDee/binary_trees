#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: A pointer to the root node of the tree
*
* Return: height (Success) or 0 (Failure)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

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
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: A pointer to the root node of the tree
*
* Return: Number of nodes (Success) or 0 (Failure)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = (binary_tree_height(tree->left));
	else
		left_height = -1;
	if (tree->right)
		right_height = binary_tree_height(tree->right);
	else
		right_height = -1;

	return (left_height - right_height);
}
