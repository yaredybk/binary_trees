#include"binary_trees.h"

/**
 * tree_count - goes through a binary tree using in-order traversal
 * @tree: a pointer to the tree node
 * @max: is a pointer to a height of the tree.
 * @current: recrusive counter
 */
void tree_count(const binary_tree_t *tree, size_t *max, size_t current)
{
	if (tree != NULL && max != NULL)
	{
		current++;
		tree_count(tree->left, max, current);
		tree_count(tree->right, max, current);
	}
	else if (*max < current)
		*max = current;
}

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: a pointer to the tree node
 * Return: height of tree, if tree is NULL 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);
	h = 0;
	tree_count(tree, &h, 0);
	h--;
	return (h);
}
