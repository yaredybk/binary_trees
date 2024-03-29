#include"binary_trees.h"

/**
 * tree_depth - goes through a binary tree
 * @tree: a pointer to the tree node
 * @max: is a pointer to a depth of the tree.
 * @current: recrusive counter
 */
void tree_depth(const binary_tree_t *tree, size_t *max, size_t current)
{
	if (tree != NULL && max != NULL)
	{
		current++;
		tree_depth(tree->parent, max, current);
	}
	else if (*max < current)
		*max = current;
}

/**
 * binary_tree_depth -  measures the depth of a binary tree
 * @tree: a pointer to the tree node
 * Return: depth of tree, if tree is NULL 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);
	h = 0;
	tree_depth(tree, &h, 0);
	h--;
	return (h);
}
