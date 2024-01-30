#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_print - Prints the binary tree structure
 * @tree: A pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
if (tree == NULL)
return;
/* Print the root */
printf("%d\n", tree->n);
/* Recursively print the left and right subtrees */
printf("Left:");
binary_tree_print(tree->left);
printf("Right:");
binary_tree_print(tree->right);
}
