#include"binary_trees.h"
/**
 * binary_tree_insert_left - A function that insert to theleftnode
 * @parent: a pointer to the node to insert the left child
 * @value: The value to insert in newnode.
 * Return: The newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	/*checking if the node to insert in has a left child already*/
	/* then move the left child to newnode and update it*/

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}

