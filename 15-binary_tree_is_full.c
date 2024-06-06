#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 * @root: pointer to the root node
 * Return: 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*if a node has one child it is not full binary tree*/
	if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	/*check the left and right subtrees recursively*/
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
