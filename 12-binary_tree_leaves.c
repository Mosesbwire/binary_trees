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
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: 0 if tree in NULL otherwise return number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (_binary_tree_is_leaf(tree) == 1)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
