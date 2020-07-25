#include "binary_trees.h"

/**
 * binary_tree_height - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t treeSize = 0;

	if (!tree)
		return (0);
	treeSize += (!tree->left && !tree->right) ? 1 : 0;
	treeSize += binary_tree_leaves(tree->left);
	treeSize += binary_tree_leaves(tree->right);
	return (treeSize);
}
