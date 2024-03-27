#include"binary_trees.h"
/**
 * binary_tree_delete - The function name
 * @tree: The root node
 * Return:
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*recursively */
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
