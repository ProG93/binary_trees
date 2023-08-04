#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node at right of the tree
 * @parent: parent of new node
 * @value: value of new node
 * Return: pointer of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild = NULL;

	if (!parent)
		return (NULL);

	rightChild = binary_tree_node(parent, value);
	if (!rightChild)
		return (NULL);

	rightChild->right = parent->right;

	if (parent->right)
		parent->right->parent = rightChild;

	parent->right = rightChild;

	return (rightChild);
}
