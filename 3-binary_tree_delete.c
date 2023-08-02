#include "binary_tree.h"
/**
 * binary_tree_delete - delete node from tree
 * @parent: parent of the tree
 * @value: value of new node
 * Return: return new pointer of tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
