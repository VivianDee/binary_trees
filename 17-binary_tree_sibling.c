#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node
* @node: A pointer to the node	to find the sibling
*
* Return: sibling node (Success) or NULL (Failure)
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
