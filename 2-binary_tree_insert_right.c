#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
/* Check if the parent is NULL */
if (parent == NULL)
return (NULL);
/* Allocate memory for the new node */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
/* Initialize the new node */
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
/* If the parent already has a right child, set new_node as the right child and update parent */
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}
