#include "binary_trees.h"

/**
 * binary_tree_height - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t leftHeight = 1 + binary_tree_height(tree->left);
	size_t rightHeight = 1 + binary_tree_height(tree->right);

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
