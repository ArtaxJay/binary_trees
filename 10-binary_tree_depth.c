#include "binary_trees.h"

/**
 * binary_tree_depth - find the height of a node.
 * @tree: a ptr to d node find its height..
 *
 * Return: ret node height
 * else, ret 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
