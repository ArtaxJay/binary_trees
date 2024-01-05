#include "binary_trees.h"

/**
 * binary_tree_sibling - locates the sibling of a node.
 * @node: A ptr 2 d node we need 2 locate its sibling.
 * Return: ret a ptr 2 d sibling.
 * else, ret NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
