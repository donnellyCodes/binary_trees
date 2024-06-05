#include "binary_trees.h"
/**
 * binary_tree_preorder - checks the tree in preorder traversal
 * @tree : pointer to the root node
 * @func: pointer to a function to call
 * Return: NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	else
	{
		/*call function of current node*/
		func(tree->n);
		/*traverse left subtree recursively*/
		binary_tree_preorder(tree->left, func);
		/*traverse right subtree recursively*/
		binary_tree_preorder(tree->right, func);
	}
}
