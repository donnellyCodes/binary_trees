#include "binary_trees.h"
/**
 * binary_tree_height -  measures height of a binary tree
 * @tree: pointer to the root node
 * Return: O
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*find height og the left and right subtrees recursively*/
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	/*return maximum height plus one*/
	return (1 + (left_height > right_height ? left_height : right_height));
}
