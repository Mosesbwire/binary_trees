#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL otherwise Return size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

}
