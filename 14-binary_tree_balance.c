#include "binary_trees.h"

/**
 * binary_tree_balance - finds d balance factor of a tree.
 * @tree: A ptr 2 d root node.
 * Return: ret balance factor.
 * else, ret 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lt = 0, rt = 0;

		lt = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lt > rt) ? lt : rt);
	}
	return (0);
}
