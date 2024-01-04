#include "binary_trees.h"

/**
 * binary_tree_delete - Will delete an entire binary tree.
 * @tree: d tree to delete.
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
