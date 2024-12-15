#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: 0, the binary tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	if (tree != NULL)
	{
		return (left + right + 1);
	}

	return (0);
}
