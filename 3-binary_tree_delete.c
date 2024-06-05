#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node
 * Return: NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/*delete the left subtree*/
	binary_tree_delete(tree->left);
	/*delete the right subtree*/
	binary_tree_delete(tree->right);
	/*free memory of current node*/
	free(tree);
}
