#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the pointer of root tree
 * Return: 0 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if ((tree->right != NULL && tree->left == NULL)
			|| (tree->right == NULL && tree->left != NULL))
		return (0);

	right = binary_tree_is_full(tree->right);

	left = binary_tree_is_full(tree->left);

	if (right == 1 && left == 1)
		return (1);
	return (0);
}
