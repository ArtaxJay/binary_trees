#include "binary_trees.h"

/**
 * is_full_recursive - will check if a tree is full by recursive calling.
 * @tree: A ptr 2 d root node.
 * Return: ret 1 if full.
 * else, ret 0.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - call the func above to check for a full tree.
 * @tree: A ptr 2 d root-node.
 * Return: ret 1 if not full.
 * else, ret 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
