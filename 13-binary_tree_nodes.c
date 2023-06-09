#include "binary_trees.h"

/**
 * _binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 * Return: 1 if node is leaf otherwise 0
 */

int _binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right || !node)
	{
		return (0);
	}

	return (1);
}

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

	if (_binary_tree_is_leaf(tree) == 1)
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
