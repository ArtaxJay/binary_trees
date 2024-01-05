#include "binary_trees.h"

/**
 * binary_tree_leaves - Determine the number tree leaf-nodes
 * @tree: ptr to d root node.
 * Return: ret num leaf-nodes in a tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
