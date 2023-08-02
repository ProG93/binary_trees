#include "binary_tree.h"

/**
 * binary_tree_node - create tree node
 * @parent: parent of tree node
 * @value: value of the tree node
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
		binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;

	return (newNode);
}
