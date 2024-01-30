#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle is found.
 * If node is NULL, has no parent, or its parent has no sibling,
 * return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
return (binary_tree_sibling(node->parent));
}
