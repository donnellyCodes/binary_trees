#include "binary_trees.h"
/**
 * binary_tree_height_b -measures height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	return ((l > r) ? l : r);
}

/**
 * binary_tree_balance - measures balance factor
 * @tree: pointer to the root node
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;

	int right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = ((int)binary_tree_height_b(tree->left));
	right_height = ((int)binary_tree_height_b(tree->right));
	return (left_height - right_height);
}
