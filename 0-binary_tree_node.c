#include"binary_trees.h"
/**
 * binary_tree_node - the function name
 * @parent: aa pointer to the parent of the node to create
 * @value: The data to insert
 * Return: Null if an errot occur else newnode created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}

