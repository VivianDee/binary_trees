#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: A pointer to the root node of the tree
*
* Return: Number of nodes (Success) or 0 (Failure)
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0, nodes_right = 0;

	if (!tree)
		return (0);

	if (tree->left && !tree->left->left)
		nodes_left = 1;
	if (tree->right  && !tree->right->right)
		nodes_right = 1;

	nodes_right += binary_tree_nodes(tree->right);
	nodes_left += binary_tree_nodes(tree->left);

	return (nodes_right + nodes_left);
}
