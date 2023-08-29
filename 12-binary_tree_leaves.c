#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree
* @tree: A pointer to the root node of the tree
*
* Return: Number of leaves (Success) or 0 (Failure)
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		leaves += binary_tree_leaves(tree->left);
	}
	if (tree->right)
	{
		leaves += binary_tree_leaves(tree->right);
	}
	if (!tree->left && !tree->right)
		return (1);

	return (leaves);
}
