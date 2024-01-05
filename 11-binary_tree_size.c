#include "binary_trees.h"

/**
 * binary_tree_size - finds d size of a binary tree.
 * @tree: A ptr 2 d root node of the tree.
 * Return: ret size of tree
 * else, ret 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
