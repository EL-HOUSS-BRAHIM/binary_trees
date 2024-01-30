#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
/* Check if the node is not NULL and has no parent */
if (node != NULL && node->parent == NULL)
return (1);
/* If the node is NULL or has a parent, it is not a root */
return (0);
}
