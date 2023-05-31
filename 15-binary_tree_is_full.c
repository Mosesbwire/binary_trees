#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: Pointer to root node of the tree
 *
 * Return: 0 if tree is NULL, 1 if tree is full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int total_nodes;

	if (!tree)
		return (0);

	total_nodes = binary_tree_size(tree);

	if (total_nodes % 2 == 0)
		return (0);

	return (1);

}
