#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0, the binary tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}

	if (left > right)
	{
		return (left);
	}
	return (right);
}
