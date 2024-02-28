#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - count the size of tree
 * @tree: the pointer of root tree
 * Return: the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = size + 1;
	size += binary_tree_size(tree->right);
	size += binary_tree_size(tree->left);

	return (size);
}
