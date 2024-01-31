#pragma once
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Basic Binary Tree Structure */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function Prototypes */

/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 3 */
void binary_tree_delete(binary_tree_t *tree);

/* Task 4 */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Task 6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Task 5 */
int binary_tree_is_root(const binary_tree_t *node);

/* Task 7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Task 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Task 9 */
size_t binary_tree_height(const binary_tree_t *tree);

/* Task 10 */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Task 11 */
size_t binary_tree_size(const binary_tree_t *tree);

/* Task 12 */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Task 13 */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Task 14 */
int binary_tree_balance(const binary_tree_t *tree);

/* Task 15 */
int binary_tree_is_full(const binary_tree_t *tree);

/* Task 16 */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Task 17 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Task 18 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
/* Print functions */
void binary_tree_print(const binary_tree_t *);
/* Task 19 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
/* Task 20 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
/* Task 21 */
int binary_tree_is_complete(const binary_tree_t *tree);
/* Task 22 */

/* Task 23 */

/* Task 24 */

/* Task 25 */

/* Task 26 */

/* Task 27 */

/* Task 28 */

/* Task 29 */

/* Task 30 */

/* Task 31 */

/* Task 32 */

/* Task 33 */

/* Task 34 */

/* Task 35 */

/* Task 36 */

/* Task 37 */

/* Task 38 */

/* Task 39 */

/* Task 40 */

/* Task 41 */
