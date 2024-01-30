#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 *         If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* If the tree is a leaf node, it is considered full */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If both left and right subtrees exist, check their fullness */
    if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If one subtree exists and the other is NULL, the tree is not full */
    return (0);
}
