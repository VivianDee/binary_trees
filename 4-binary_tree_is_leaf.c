#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a leaf
* @node: Node to be checked
*
* Return:
* - 1 (if node is a leaf)
* - 0 (Otherwise or if node is NULL)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right)
		return (0);
	return (1);
}
