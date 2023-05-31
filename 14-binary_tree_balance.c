#include "binary_trees.h"
#include <stdio.h>

/**
 * _binary_tree_height - measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL otherwise return height
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + _binary_tree_height(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);

}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL otherwise return balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + _binary_tree_height(tree->right) : 0;
	return (height_left - height_right);
}
