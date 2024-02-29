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
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 1)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
	}

	return (left == right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the pointer root of tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

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
