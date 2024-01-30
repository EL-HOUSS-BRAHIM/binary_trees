#include <stdlib.h>
#include "binary_tree.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if the leaf left and right are not empty, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
/* Check if the nod null and node right or left are null */
return(0)
/* If the node and node left or right not null return 1 (leaf) */
return (1)
}
