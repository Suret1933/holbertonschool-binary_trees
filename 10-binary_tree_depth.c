#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of
 * a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: 0, the depth binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth  = 0;

	if (tree == NULL)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);

	if (tree->parent != NULL)
	{
		return (depth + 1);
	}

	return (0);
}
