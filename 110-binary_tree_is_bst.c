#include "binary_trees.h"


/**
* is_bst - Checks if a binary tree is a valid Binary Search Tree
* @tree: A binary tree
* @root_val: The root value
*
* Return: 1 (if valid Binary Search Tree) 0 (Otherwise)
*/
int is_bst(const binary_tree_t *tree, int root_val)
{
	int check_left = 1, check_right = 1;

	if (!tree)
		return (1);

	if (tree->left)
	{
		check_left = is_bst(tree->left, root_val);
		if (tree->left->n >= tree->n || tree->left->n >= root_val)
			check_left = 0;

	}
	if (tree->right)
	{
		check_right = is_bst(tree->right, root_val);
		if (tree->right->n <= tree->n || tree->right->n <= root_val)
			check_right = 0;
	}

	return (check_left && check_right);
}

/**
* binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
* @tree: A binary tree
*
* Return: 1 (if valid Binary Search Tree) 0 (Otherwise)
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_bst(tree, tree->n));
}
