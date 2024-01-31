#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, return 1. Otherwise, return 0.
 *         If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = 0, nodes = 0, perfect_nodes = 1;

    if (tree == NULL)
        return (0);

    // Calculate the height of the tree
    while (tree->parent != NULL)
    {
        height++;
        tree = tree->parent;
    }

    // Calculate the number of perfect nodes for a tree of given height
    while (height > 0)
    {
        perfect_nodes *= 2;
        height--;
    }

    // Calculate the size of the tree
    nodes = binary_tree_size(tree);

    return (nodes == perfect_nodes);
}
