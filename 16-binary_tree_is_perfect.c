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

/**
 * binary_tree_is_full - creates a binary tree node
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

/**
 * binary_tree_is_perfect - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
