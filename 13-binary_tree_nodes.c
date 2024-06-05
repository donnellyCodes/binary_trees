#include "binary_tests.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}