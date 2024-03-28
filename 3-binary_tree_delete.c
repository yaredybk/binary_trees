#include"binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tre
 * @tree: a pointer to the tree node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
