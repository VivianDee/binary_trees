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
