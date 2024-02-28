#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_nodes -  counts the nodes with at least 1
 * child in a binary tree
 * @tree: the root of the tree
 * Return: the number of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		node = 1;

	node += binary_tree_nodes(tree->right);
	node += binary_tree_nodes(tree->left);

	return (node);
}
