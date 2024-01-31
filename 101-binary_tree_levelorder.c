/* File: 102-binary_tree_is_complete.c */
#include "binary_trees.h"
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is complete, 1. Otherwise, 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    const binary_tree_t **queue = NULL;
    size_t front = 0, rear = 0;
    int null_seen = 0;

    if (tree == NULL)
        return (0);

    queue = malloc(sizeof(binary_tree_t *) * 1000);

    if (queue == NULL)
        return (0);

    queue[rear++] = tree;

    while (front < rear)
    {
        const binary_tree_t *current = queue[front++];

        if (current == NULL)
        {
            null_seen = 1;
        }
        else
        {
            if (null_seen)
            {
                free(queue);
                return (0);
            }

            queue[rear++] = current->left;
            queue[rear++] = current->right;
        }
    }

    free(queue);
    return (1);
}
