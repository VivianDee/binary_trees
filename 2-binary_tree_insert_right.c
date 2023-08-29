#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node
* @parent: A pointer to the parent node of the node to create
* @value: Value to store in the new node
*
* Return: A pointer to the new node(Success) or Null(Failure)
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temp;
		parent->right->right->parent = parent->right;
		return (parent->right);
	}

	parent->right = binary_tree_node(parent, value);
	return (parent->right);
}
