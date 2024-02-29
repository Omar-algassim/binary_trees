#include "binary_trees.h"
#include <math.h>
#include <stdio.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the pointer of root tree
 * Return: 0 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (tree == NULL)
		return (0);

	if ((tree->right != NULL && tree->left == NULL)
			|| (tree->right == NULL && tree->left != NULL))
		return (0);

	if (binary_tree_is_full(tree->right) == 0 && tree->parent == NULL)
		return (0);

	return (full);

}
