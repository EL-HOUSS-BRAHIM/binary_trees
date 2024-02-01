#include "binary_trees.h"
/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
/* Create a queue for level-order traversal */
binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * binary_tree_size(tree));
if (queue == NULL)
return (0);
int front = 0, rear = 0;
binary_tree_t *current;
/* Enqueue the root to start traversal */
queue[rear++] = (binary_tree_t *)tree;
while (front < rear)
{
/* Dequeue a node */
current = queue[front++];
/* If NULL encountered, check if any non-NULL node follows */
if (current == NULL)
{
for (int i = front; i < rear; i++)
{
if (queue[i] != NULL)
{
free(queue);
return (0);
}
}
}
else
{
/* Enqueue the left child */
queue[rear++] = current->left;
/* Enqueue the right child */
queue[rear++] = current->right;
}
}
/* Free the allocated queue */
free(queue);
return (1);
}
