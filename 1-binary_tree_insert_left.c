#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: the parent node
 * @value: the value of the node
 * Return: a node to a bianary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
