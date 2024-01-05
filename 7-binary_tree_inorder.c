#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal through a tree.
 * @tree: A ptr to d root of d tree to traverse.
 * @func: this ptr calls a function for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
