#include "binary_trees.h"
/**
 * binary_tree_height - measure height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r =  tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((1 > r) ? 1 : r);
}

/**
 * binary_tree_depth - depth of specified node
 * @tree: node to check the depth
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

/**
 * linked_node - marks a linked list
 * @head: pointer to the head of list
 * @tree: pointer to the root node
 * @level: depth of the node
 * Return: Nothing
 */
void linked_node(link_t **head, const binary_tree_t *tree, size_t level)
{
	link_t *new, *aux;

	new = malloc(sizeof(link_t));
	if (new == NULL)
		return;
	new->n = level;
	new->node = tree;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	new->next = NULL;
	aux->next = new
}

 /**
 * recursion - searches the complete tree
 * @head: pointer to head of list
 * @tree: pointer to the root node
 * Return: Nothing
 */
void recursion(link_t **head, const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree != NULL)
	{
		level = binary_tree_depth(tree);
		linked_node(head, tree, level);
		recursion(head, tree->left);
		recursion(head, tree->right);
	}
}

/**
 * binary_tree_levelorder - prints the nodes element in level-order traversal
 * @tree: pointer to the root node
 * @func: pointer to the function to call
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	link_t *head, *aux;
	size_t height = 0, count = 0;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	head = NULL;
	recursion(&head, tree);
	while (count <= height)
	{
		aux = head;
		while (aux != NULL)
		{
			if (count == aux->n)
				func(aux->node->n);
			aux = aux->next;
		}
		count++;
	}
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
