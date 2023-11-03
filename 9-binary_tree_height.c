#include "binary_trees.h"

/**
 * binary_tree_height - height of the binary tree to be measured
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		r = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		l = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
