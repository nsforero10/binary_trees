#include "binary_trees.h"

/**
 * binary_tree_preorder - creates a binary tree node
 * @node: the node to check
 * @func: function to execute
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
