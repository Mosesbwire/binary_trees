#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child
 *
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: number of nodes otherwise 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree) == 1)
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
