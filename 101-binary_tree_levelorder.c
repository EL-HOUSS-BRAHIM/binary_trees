#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: If `tree` or `func` is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    binary_tree_t **queue = NULL;
    size_t front = 0, rear = 0;

    if (tree == NULL || func == NULL)
        return;

    queue = malloc(sizeof(binary_tree_t *) * 1000);

    if (queue == NULL)
        return;

    queue[rear++] = (binary_tree_t *)tree;

    while (front < rear)
    {
        binary_tree_t *current = queue[front++];

        func(current->n);

        if (current->left != NULL)
            queue[rear++] = current->left;

        if (current->right != NULL)
            queue[rear++] = current->right;
    }

    free(queue);
}
