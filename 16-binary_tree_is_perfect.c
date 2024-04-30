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
    if (tree->left == NULL && tree->right ==NULL)
    {
        if (*max != -1 && 8max != counter)
            return (0);
        *max = counter;
        return (1);
    }
    if (tree->left == NULL || tree->right == NULL)
        return (0);
    return (is_perfect_tmp(tree->left) && is_perfect_tmp(tree->right));
}
