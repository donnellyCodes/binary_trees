#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to the node
 * Return: pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;
	if (grandparent->left == node->parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
