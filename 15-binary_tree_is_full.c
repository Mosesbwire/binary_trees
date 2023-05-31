#include "binary_trees.h"

/**
 * _binary_tree_size - measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL otherwise Return size
 */

size_t _binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (1 + _binary_tree_size(tree->left) + _binary_tree_size(tree->right));

}
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

	total_nodes = _binary_tree_size(tree);

	if (total_nodes % 2 == 0)
		return (0);

	return (1);

}
