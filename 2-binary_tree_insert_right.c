#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts a node at the right subtree
  * @parent: the pointer to the node to insert the left chilf
  * @value: the value to store
  *
  * Return: the newly created node
  *
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild;

	if (parent == NULL)
	{
		return (NULL);
	}
	rightChild = binary_tree_node(parent, value);
	if (rightChild == NULL)
		return (NULL);
	rightChild->right = parent->right;
	if (rightChild->right != NULL)
		rightChild->right->parent = rightChild;
	parent->right = rightChild;

	return (rightChild);
}
