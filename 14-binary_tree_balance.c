#include "binary_trees.h"
/**
 * binary_tree_balance - measures balance factor
 * @tree: pointer to the root node
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;

	int right_height;

	if (tree == NULL)
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);
	return (left_height - right_height);
}
