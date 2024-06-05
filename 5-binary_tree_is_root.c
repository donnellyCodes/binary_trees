#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/*a node is a root if it has no parent*/
	return (node->parent == NULL);
}
