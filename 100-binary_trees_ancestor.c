#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest anceestor
 * @first: the first node
 * @second: the second node
 * Return: the lowest anceestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *common = second->parent;

	if (second == NULL || first == NULL)
		return (NULL);
	if (common == first)
		return (common);
	while (first != NULL)
	{
		first = first->parent;
		while (common != NULL)
		{
			if (first == common)
				return (common);
			common = common->parent;
		}
	}
	return (NULL);
}
