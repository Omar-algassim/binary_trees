#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, return 0
 * otherwise return leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL)
	{
		leaves++;
	}
	if (tree->left != NULL)
	{
		leaves++;
	}
	binary_tree_leaves(tree->right);
	binary_tree_leaves(tree->left);

	return (leaves);
}
