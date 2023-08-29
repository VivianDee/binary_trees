#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a binary tree
* @tree: A pointer to a node whose depth is measured
*
* Return: depth (Success) or 0 (Failure)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	size_t depth = 0;

	if (!tree)
		return (0);

	while (node->parent)
	{
		depth += 1;
		node = node->parent;
	}

	return (depth);
}


/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: A pointer to the root node of the tree
*
* Return: 1 (if perfect) or 0 (otherwise)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth != right_depth)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
