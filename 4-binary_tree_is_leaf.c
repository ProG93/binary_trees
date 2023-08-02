#include "binary_tree.h"
/**
 * binary_tree_is_leaf - check if is leafs
 * @parent: parent of new leaf
 * @value: value of new leaf
 * Return: return of new node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);

	return (1);
}
