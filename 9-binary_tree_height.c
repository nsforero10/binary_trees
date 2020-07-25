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
	size_t leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	size_t rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);

}
