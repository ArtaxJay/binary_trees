#include "binary_trees.h"

/**
 * binary_tree_uncle - locates d uncle of a node.
 * @node: A ptr 2 d node we need to locate its uncle.
 * Return: ret a ptr 2 d uncle node.
 * else, ret NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
