#include"binary_trees.h"
/**
 * binary_tree_is_root - function name
 * @node: pointer
 * Return: return 1 if yes or zero if no
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
