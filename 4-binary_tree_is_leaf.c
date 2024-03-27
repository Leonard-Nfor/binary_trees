#include"binary_trees.h"
/**
 * binary_tree_is_leaf - name of the function
 * @node: pointer to the node to check
 * Return: 1 if is a leaf and Null if is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*using the logical or*/
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
