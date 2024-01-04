#include "binary_trees.h"

/**
 * binary_tree_node - will create binary tree nodes.
 * @parent: A ptr-arg 2 d parent of d node created.
 * @value: value of d node created.
 *
 * Return: In case of an error - NULL.
 *         Else - a ptr to d node created.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
