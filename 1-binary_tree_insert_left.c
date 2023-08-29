#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: A pointer to the parent node of the node to create
* @value: Value to store in the new node
*
* Return: A pointer to the new node(Success) or Null(Failure)
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp;
		parent->left->left->parent = parent->left;
		return (parent->left);
	}

	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
