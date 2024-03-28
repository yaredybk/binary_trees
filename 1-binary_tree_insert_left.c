#include"binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 * or if parent is NULL
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;
	binary_tree_t *tmp;

	left =  binary_tree_node(parent, value);
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = left;
		left->left = tmp;
	}
	else
	{
		parent->left = left;
	}
	return (left);
}
