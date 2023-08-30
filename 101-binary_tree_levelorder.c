#include "binary_trees.h"

/**
* create_list - Creates a level-order traversal of a binary tree using an array
* @tree: A binary tree
* @array: Array that stores each node
* @idx: index in the array
*
*/

void create_list(const binary_tree_t *tree,
	const binary_tree_t **array, int *idx)
{
	if (!tree)
		return;

	if (tree->left || tree->right)
	{
		array[(*idx)++] = tree->left;
		array[(*idx)++] = tree->right;
	}
	create_list(tree->left, array, idx);
	create_list(tree->right, array, idx);
}


/**
* binary_tree_levelorder - Goes through a binary tree using
*level_order traversal
* @tree: A binary tree
* @func: A pointer to a function to call for each node
*
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int idx = 0, i = 0;
	const binary_tree_t *array[1024];

	for (i = 0; i < 1024; i++)
		array[i] = NULL;

	if (!tree)
		return;

	array[idx++] = tree;
	create_list(tree, array, &idx);

	for (i = 0; array[i] != NULL; i++)
		func(array[i]->n);
}
