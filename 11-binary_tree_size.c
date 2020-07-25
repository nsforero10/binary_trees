#include "binary_trees.h"

/**
 * binary_tree_size - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t treeSize = binary_tree_size(tree->left)
	+ 1 + binary_tree_size(tree->right);
	return (treeSize);
}
