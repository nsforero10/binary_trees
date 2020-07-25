#include "binary_trees.h"

/**
 * binary_tree_depth - creates a binary tree node
 * @tree: the parent node
 * Return: the height of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree->parent)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
