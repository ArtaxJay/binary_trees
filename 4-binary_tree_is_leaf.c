#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks for leaf-nodes in a binary tree.
 * @node: A ptr to d node to check.
 * Return: If node == leaf, ret 1.
 *         Otherwise ret 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
