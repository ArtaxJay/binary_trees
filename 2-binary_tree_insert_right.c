#include "binary_trees.h"

/**
 * binary_tree_insert_right - will insert a node as d right-child
 * of another node in a binary tree.
 * @parent: A ptr 2 d node to have a right-child node.
 * @value: value to store in d inserted node.
 * Return: A ptr to the inserted node.
 *         Else - ret NULL
 *
 * Description: If parent-node already has a right-child,
 * the inserted-node takes its place and
 * the old right-child is set as the right-child of the inserted-node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
