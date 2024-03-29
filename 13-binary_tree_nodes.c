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
		if (tree->left != NULL || tree->right != NULL)
			*max = *max + 1;
		tree_count(tree->left, max);
		tree_count(tree->right, max);
	}
}

/**
 * binary_tree_size -  measures the nodes with at least 1 child of a binary tree
 * @tree: a pointer to the tree node
 * Return: nodes with at least 1 child of tree, if tree is NULL 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);
	h = 0;
	tree_count(tree, &h);
	return (h);
}
