#include "binary_trees.h"

/**
 * binary_tree_height - it measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int x = 0, y = 0;

		if (tree->y)
			y = 1 + binary_tree_height(tree->y);
		if (tree->x)
			x = 1 + binary_tree_height(tree->x);
		if (x > y)
			return (x);
		else
			return (y);
	}
	else
		return (0);
}
