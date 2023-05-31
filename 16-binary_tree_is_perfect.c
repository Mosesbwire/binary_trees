#include "binary_trees.h"

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
 * _binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL otherwise return balance factor
 */

int _binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + _binary_tree_height(tree->right) : 0;
	return (height_left - height_right);
}
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

	balance_factor = _binary_tree_balance(tree);

	if (balance_factor != 0)
		return (0);

	return (1);
}
