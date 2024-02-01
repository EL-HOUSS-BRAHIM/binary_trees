#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_levelorder - Perform level-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
/* Create a queue for level-order traversal */
binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * binary_tree_size(tree));
if (queue == NULL)
return;
int front = 0, rear = 0;
binary_tree_t *current;
/* Enqueue the root to start traversal */
queue[rear++] = (binary_tree_t *)tree;
while (front < rear)
{
/* Dequeue a node and perform the given function */
current = queue[front++];
func(current->n);
/* Enqueue the left child if it exists */
if (current->left != NULL)
queue[rear++] = current->left;
/* Enqueue the right child if it exists */
if (current->right != NULL)
queue[rear++] = current->right;
}
/* Free the allocated queue */
free(queue);
}
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size, right_size;
if (tree == NULL)
return (0);
left_size = binary_tree_size(tree->left);
right_size = binary_tree_size(tree->right);
return (1 + left_size + right_size);
}
