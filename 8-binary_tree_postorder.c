#include "binary_trees.h"

/**
 * binary_tree_postorder - creates a binary tree node
 * @node: the node to check
 * @func: function to execute
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
