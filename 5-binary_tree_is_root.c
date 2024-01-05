#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks for the root node.
 * @node: A ptr 2 d node to check.
 * Return: If node == root, ret 1.
 *         Otherwise, ret 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
