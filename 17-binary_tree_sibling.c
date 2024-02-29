#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of node
 * @node: pointer to the node
 * Return: the siblaing node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->right == node)
		sibling = parent->left;
	else
		sibling = parent->right;

	return (sibling);
}
