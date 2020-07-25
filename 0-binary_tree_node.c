#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node
 * @value: the value of the node
 * Return: a node to a bianary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->left = NULL, new->right = NULL;
	new->n = value;
	new->parent = parent;
	return (new);
}
