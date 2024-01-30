#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - Performs a pre-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node node value as a parameter
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* Check if the tree and function are not NULL */
if (tree != NULL && func != NULL)
{
/* Call the function for the current node */
func(tree->n);
/* Recursively traverse the left subtree */
binary_tree_preorder(tree->left, func);
/* Recursively traverse the right subtree */
binary_tree_preorder(tree->right, func);
}
}
