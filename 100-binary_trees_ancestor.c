#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a binary tree
* @tree: A pointer to a node whose depth is measured
*
* Return: depth (Success) or 0 (Failure)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	size_t depth = 0;

	if (!tree)
		return (0);

	while (node->parent)
	{
		depth += 1;
		node = node->parent;
	}

	return (depth);
}

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: A pointer to the first node
* @second: A pointer to the second node
*
* Return: ancestor node (Success) or NULL (Failure)
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *temp = NULL;
	size_t depth_first = 0, depth_second = 0;

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	if (depth_first == depth_second)
		return (first->parent);
	else if (first->parent == second)
		return (first->parent);
	else if (second->parent == first)
		return (second->parent);
	else if (depth_first > depth_second)
	{
		temp = first;
		while ((temp->parent != second->parent) && (depth_first > depth_second))
		{
			temp = temp->parent;
			depth_first -= 1;
		}
		if (temp->parent == second->parent)
			return (temp->parent);
	}
	else if (depth_first < depth_second)
	{
		temp = second;
		while ((temp->parent != first->parent) && (depth_first < depth_second))
		{
			temp = temp->parent;
			depth_second -= 1;
		}
		if (temp->parent == first->parent)
			return (temp->parent);
	}

	return (NULL);
}
