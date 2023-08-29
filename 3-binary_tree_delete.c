#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - Delete a binary tree
* @tree: A binary tree
*
* Return: A pointer to the new node(Success) or Null(Failure)
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
