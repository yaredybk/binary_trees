#include"binary_trees.h"

/**
 * is_perfect_tmp - goes through a binary tree using pre-order traversal
 * @tree: a pointer to the tree node
 * @max: is a pointer to an int to store and compared max value
 * @counter: is a number to count the depth of recrusive call
 *
 * Return: 1 if perfect, Otherwise 0
 */
int is_perfect_tmp(const binary_tree_t *tree, int *max, int counter)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		if (*max != -1 && *max != counter)
			return (0);
		*max = counter;
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	counter++;
	return (is_perfect_tmp(tree->left, max, counter) &&
			is_perfect_tmp(tree->right, max, counter));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int max;

	max = -1;

	if (tree == NULL)
		return (0);
	return (is_perfect_tmp(tree, &max, 0));
}
