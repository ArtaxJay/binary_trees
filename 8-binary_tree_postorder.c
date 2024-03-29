#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal through a tree.
 * @tree: A ptr 2 d root node of the tree.
 * @func: this ptr points to a function that call each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
