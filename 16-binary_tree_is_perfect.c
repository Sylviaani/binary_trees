#include "binary_trees.h"

/**
 * binary_tree_is_perfect - perfect binary inspection
 * @tree: a pointer to the root node of the tree
 * Return: when tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	size_t binary_pow_recursion(size_t base, size_t exponent);
	{
		if (exponent == 0)
			return (1);

	return (base * binary_pow_recursion(base, exponent - 1));
	}

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	power = binary_pow_recursion(2, height + 1);

	return (power - 1 == nodes);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: exponentiate the value
 * @y: power to raise x
 * Return: x to the power of y, or -1 if y is negative
 */
unsigned char is_power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * is_power_recursion(x, y - 1));
}

/**
 * binary_tree_size - size of the binary tree to be measured
 * @tree: size of tree to be measured
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - the height of a binary tree to br measured
 * @tree: height of the tree measured
 * Return: 0 if height is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;

	if (tree == NULL)
		return (0);

	height_l = tree->right ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->left ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
