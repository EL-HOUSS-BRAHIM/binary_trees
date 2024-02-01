#include "binary_trees.h"
/**
 * binary_tree_levelorder - Perform level-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing.
 * The value in the node must be passed as a parameter to the function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
/* Create a queue for level order traversal */
binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * binary_tree_height(tree));
if (queue == NULL)
return;
int front = 0, rear = 0;
binary_tree_t *current;
/* Enqueue the root */
queue[rear++] = (binary_tree_t *)tree;
while (front < rear)
{
/* Dequeue a node from the queue and perform the function */
current = queue[front++];
func(current->n);
/* Enqueue the left child */
if (current->left != NULL)
queue[rear++] = current->left;
/* Enqueue the right child */
if (current->right != NULL)
queue[rear++] = current->right;
}
free(queue);
}
/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}
