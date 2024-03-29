#include"binary_trees.h"

/**
 * tree_count - goes through a binary tre
 * @tree: a pointer to the tree node
 * @max: is a pointer to a counter
 */
void tree_count(const binary_tree_t *tree, size_t *max)
{
	if (tree != NULL && max != NULL)
	{
		if (tree->next == NULL && tree->right == NULL)
			*max = *max + 1;
		tree_count(tree->left, max);
		tree_count(tree->right, max);
	}
}

/**
 * binary_tree_leaves -  measures the leaves of a binary tree
 * @tree: a pointer to the tree node
 * Return: leaves of tree, if tree is NULL 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);
	h = 0;
	tree_count(tree, &h);
	return (h);
}
