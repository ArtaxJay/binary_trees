#include "binary_trees.h"

/**
 * binary_tree_nodes - will count d nodes with at least 1 child-node.
 * @tree: A ptr 2 d root node.
 * Return: ret counted nodes.
 * else, ret 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
