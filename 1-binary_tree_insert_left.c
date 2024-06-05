#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: pointer to created node
 */
binary_tree *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	/*set old left-child as left-child of new node*/
	new_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_node;
	parent->left = new_node;
	return (new_node);
}
