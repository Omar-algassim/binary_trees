#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the pointer root of tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right;
	size_t left;
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return 0;
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	if (right > left)
		return (right + 1);
	else
		return (left + 1);
}
