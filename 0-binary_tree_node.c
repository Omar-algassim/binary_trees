#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to the new node on success, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
	{
		return (NULL);
	}
	root->n = value;
	root->left = NULL;
	root->right = NULL;
	root->parent = parent;

	return (root);
}
