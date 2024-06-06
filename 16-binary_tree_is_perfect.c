#include "binary_trees.h"
/**
 * count_nodes - couting nodes of tree
 * @tree: pointer to root node
 * Return: 0
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * height - measures height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node
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
