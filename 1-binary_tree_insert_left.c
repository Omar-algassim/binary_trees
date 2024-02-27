#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert noe to the left
 * @parent: the parent node
 * @value: the value of node
 * Return: pointer to the created node, or
 * NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	return (new);
}

