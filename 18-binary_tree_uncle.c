#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node
* @node: A pointer to the node	to find the uncle
*
* Return: uncle node (Success) or NULL (Failure)
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *grandparent = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
