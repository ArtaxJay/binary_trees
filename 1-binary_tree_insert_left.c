#include "binary_trees.h"

/**
 * binary_tree_insert_left - Will insert a left-child in a binary tree.
 * @parent: A ptr-arg 2 d node to insert d left-child.
 * @value: value to store in d inserted node.
 *
 * Return: A ptr to d imserted node.
 *         Else - ret NULL
 *
 * Description: If parent already has a left-child,
 * the new node takes its place and
 * the old left-child is set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
