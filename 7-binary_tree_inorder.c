#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node
 * @func: pointer of the function to call
 * Return: NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	else
	{
		/*traverse to left subtree recursively*/
		binary_tree_inorder(tree->left, func);
		/*call function for the current node*/
		func(tree->n);
		/*traverse to right subtree recursively*/
		binary_tree_inorder(tree->right, func);
	}
}
