#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node a the left child of another node
 *
 * @parent: Pointer to the node to insert the left child in
 * @value: Integer value to store in new node
 *
 * Return: Pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
	} else
	{
		parent->right = node;
	}

	return (node);
}
