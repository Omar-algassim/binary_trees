#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, return 0
 * otherwise return leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);

	return (right + left);
}
