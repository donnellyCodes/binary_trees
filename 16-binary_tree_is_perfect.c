#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @root: pointer to the root node
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h;

	int expected_nodes;

	int actual_nodes;

	if (tree == NULL)
		return (0);
	/*calculate height of tree*/
	h = height(tree);
	/*check if number of nodes matches perfect binary tree formula*/
	expected_nodes = (1 << h) - 1;
	actual_nodes = count_nodes(tree);
	return (actual_nodes == expected_nodes);
}
/*helper function*/
int count_nodes(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (1 + count_nodes(node->left) + count_nodes(node->right));
}
