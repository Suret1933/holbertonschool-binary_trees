#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least
 * 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0, the number of nodes that have at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree != NULL)
	{
		return (left + right + 1);
	}

	return (0);
}
