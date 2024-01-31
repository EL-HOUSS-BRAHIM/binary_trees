#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes in a binary tree.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes, or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor;

    if (first == NULL || second == NULL)
        return (NULL);

    ancestor = first;
    while (ancestor != NULL)
    {
        if (binary_tree_is_ancestor(ancestor, second))
            return ((binary_tree_t *)ancestor);
        ancestor = ancestor->parent;
    }

    return (NULL);
}

/**
 * binary_tree_is_ancestor - Checks if a node is an ancestor of another node in a binary tree.
 * @ancestor: A pointer to the potential ancestor node.
 * @node: A pointer to the node to check for ancestry.
 *
 * Return: 1 if @ancestor is an ancestor of @node, 0 otherwise.
 */
int binary_tree_is_ancestor(const binary_tree_t *ancestor, const binary_tree_t *node)
{
    while (node != NULL)
    {
        if (node == ancestor)
            return (1);
        node = node->parent;
    }

    return (0);
}
