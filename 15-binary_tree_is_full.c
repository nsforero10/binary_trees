#include "binary_trees.h"

/**
 * binary_tree_nodes - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leftHeight = binary_tree_is_full(tree->left);
	rightHeight = binary_tree_is_full(tree->right);
	return ((leftHeight == 0 || rightHeight == 0) ? 0 : 1);
}
