#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to root node of tree to check
 *
 * Return: 0 if tree is NULL. 1 if perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t balance_factor;

	if (!tree)
		return (0);

	balance_factor = binary_tree_balance(tree);

	if (balance_factor != 0)
		return (0);

	return (1);
}
