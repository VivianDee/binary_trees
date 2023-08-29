#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a node is a leaf
* @node: The node to be checked
*
* Return:
* - 1 (if node is a root node)
* - 0 (Otherwise or if node is NULL)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent)
		return (0);
	return (1);
}
