#include "binary_tree.h"
/**
 * binary_tree_insert_left - insert binary node at the left
 * @parent: parent of the new node
 * @value: value of the new tree node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = NULL;

	if (!parent)
		return (NULL);

	leftNode = binary_tree_node(parent, value);
	if (!leftNode)
		return (NULL);

	leftNode->left = parent->left;

	if (parent->left)
		parent->left->parent = leftNode;

	parent->left = leftNode;
	return (leftNode);
}
