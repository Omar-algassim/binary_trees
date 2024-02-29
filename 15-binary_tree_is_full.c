#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the pointer of root tree
 * Return: 0 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1, ret = 1;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL && tree->left != NULL && ret != 0)
	{
		ret = 0;
		return (1);
	}
	else if (tree->right == NULL && tree->left == NULL && ret != 0)
	{
		ret = 0;
		return (1);
	}
	else
		return (0);
	ret = binary_tree_is_full(tree->right);
	ret = binary_tree_is_full(tree->left); 


	return (full);
}
