#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - a function that counts the leaves on a tree
 * @tree: a pointer to thr root node
 * Return:if there is no leaf, return NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
