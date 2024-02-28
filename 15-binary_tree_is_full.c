#include "binary_trees.h"
#include <math.h>

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

	binary_tree_is_full(tree->right);
	binary_tree_is_full(tree->left);
	if (tree->right != NULL && tree->left != NULL)
		full = 0;
	else if (tree->right == NULL && tree->left == NULL)
		full = 0;
	else
		full = 1;
	return (full);
}
