#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert left node
 * @parent: pointer to the parent node
 * @value: value to add in the node
 * Return: address of the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *tmp;


	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	tmp = NULL;
	if (parent->right)
	{
		tmp = parent->right;
		tmp->parent = node;
	}
	parent->right = node;
	node->right = tmp;

	return (node);
}
