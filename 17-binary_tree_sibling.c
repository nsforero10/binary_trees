#include "binary_trees.h"

/**
 * binary_tree_sibling - creates a binary tree node
 * @node: the parent node
 * Return: the height of the tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
