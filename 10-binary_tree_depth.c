#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a node
 * @tree: pointer to the node
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*calculate the depth recursively*/
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
