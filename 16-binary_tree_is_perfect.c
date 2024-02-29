#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0
 * otherwise return is_perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left == right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the pointer root of tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height;
	size_t left_height;

	if (tree == NULL)
		return (0);

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (right_height > left_height)
		return (right_height + 1);
	else
		return (left_height + 1);
}
