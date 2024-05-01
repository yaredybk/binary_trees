#include"binary_trees.h"

/**
 * tmp_ance - goes through a binary tree using pre-order traversal
 * to get an ancestor
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: NULL or an ancestor node if found
 */
binary_tree_t *tmp_ance(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t a;

	a = second;
	while (a != NULL && a != first)
		a = a->parent;
	if (a == first)
		return (first);
	if (first->parent != NULL)
		return (NULL);
	return (tmp_ance(first->parent, second));
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	return (tmp_ance(rconst binary_tree_t *first,
				const binary_tree_t *second));
}
