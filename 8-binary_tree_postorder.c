#include "binary_trees.h"
/**
 * binary_tree_postorder - uses postorder traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call
 * Return: NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/*traverse left subtree recursively*/
	binary_tree_postorder(tree->left, func);
	/*traverse right subtree recursively*/
	binary_tree_postorder(tree->right, func);
	/*call the function for the current node*/
	func(tree->n);
}
