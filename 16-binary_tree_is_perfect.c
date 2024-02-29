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
	binary_tree_is_perfect(tree->left);
	right = binary_tree_height(tree->right);
	binary_tree_is_perfect(tree->right);

	return (left == right);
}

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

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	if (right > left)
		return (right + 1);
	else
		return (left + 1);
}
