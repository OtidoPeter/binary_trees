#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a node at the left subtree
  * @parent: the pointer to the node to insert the left chilf
  * @value: the value to store
  *
  * Return: the newly created node
  *
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild;

	if (parent == NULL)
	{
		return (NULL);
	}
	leftChild = binary_tree_node(parent, value);
	if (leftChild == NULL)
		return (NULL);
	leftChild->left = parent->left;
	if (leftChild->left != NULL)
		leftChild->left->parent = leftChild;
	parent->left = leftChild;

	return (leftChild);
}
