#include"binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 * or if parent is NULL
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	right =  binary_tree_node(parent, value);
	if (right == NULL)
		return (NULL);
	if (parent->right != NULL)
		right->right = parent->right;
	parent->right = right;
	return (right);
}
