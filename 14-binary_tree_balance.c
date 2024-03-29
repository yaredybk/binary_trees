#include"binary_trees.h"

/**
 * binary_tree_balance -  measures balance of binary tree
 * @tree: a pointer to the tree node
 * Return: balance of tree
 *  , if tree is NULL 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (h);
}
