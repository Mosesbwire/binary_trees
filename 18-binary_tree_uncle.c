#include "binary_trees.h"

/**
 * _binary_tree_sibling - finds the sibling of a node
 *
 * @node: Pointer to the node to get its sibling
 *
 * Return: NULL if node/parent id NULL or node has no sibling otherwise return
 * pointer to sibling
 */

binary_tree_t *_binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left_child;
	binary_tree_t *right_child;
	binary_tree_t *sibling;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	left_child = node->parent->left;
	right_child = node->parent->right;

	if (left_child != node)
	{
		sibling = left_child;
	} else
	{
		sibling = right_child;
	}

	return (sibling);



}
/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: Poniter to node to find uncle
 *
 * Return: NULL if node is NULL or node has no uncle otherwise pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (_binary_tree_sibling(node->parent));

}
