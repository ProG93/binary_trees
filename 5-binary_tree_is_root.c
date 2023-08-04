#include "binary_trees.h"
/**
 * binary_is_tree_root - check if tree is root
 * @parent: parent of new tree
 * @value: value of new tree
 * Return: return new node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
