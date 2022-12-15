#include "binary_trees.h"

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree to measure the height
  *
  * Return: height of the tree
  *
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);


	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);

	if (height_right > height_left)
		return (1 + height_right);
	return (1 + height_left);
}
