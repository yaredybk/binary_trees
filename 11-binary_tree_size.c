#include"binary_trees.h"

/**
 * tree_count - goes through a binary tree using in-order traversal
 * @tree: a pointer to the tree node
 * @max: is a pointer to a depth of the tree.
 */
void tree_count(const binary_tree_t *tree, size_t *max)
{
	if (tree != NULL && max != NULL)
	{
		*max = *max + 1;
		tree_count(tree->left, max);
		tree_count(tree->right, max);
	}
}

/**
 * binary_tree_size -  measures the depth of a binary tree
 * @tree: a pointer to the tree node
 * Return: depth of tree, if tree is NULL 0
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
