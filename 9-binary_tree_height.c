#include "binary_trees.h"
/**
 * binary_tree_height -  measures height of a binary tree
 * @tree: pointer to the root node
 * Return: O
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	/*find height of the left and right subtrees recursively*/
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/*return maximum height plus one*/
	return ((left_height > right_height) ? left_height : right_height);
}
