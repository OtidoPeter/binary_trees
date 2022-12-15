#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to the parent node
 * @value: value to insert to the node
 *
 * Return: pointer to the new node
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = newNode->right = NULL;

	return (newNode);
}
