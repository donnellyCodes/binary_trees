#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer of the first node
 * @second: pointer of the second node
 * Return: the ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f, *s;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	f = first->parent;
	s = second->parent;
	if (f == NULL || first == s || (!f->parent && s))
		return (binary_trees_ancestor(first, s));
	else if (s == NULL || f == second || (!s->parent && f))
		return (binary_trees_ancestor(f, second));
	return (binary_trees_ancestor(f, s));
}
