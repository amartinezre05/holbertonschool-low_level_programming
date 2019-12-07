#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to traverse
*
* Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sum_left = 0, sum_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		sum_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		sum_right = 1 + binary_tree_height(tree->right);
	if (sum_left >= sum_right)
		return (sum_left);
	else
		return (sum_right);
}
/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: a pointer to the root node of the tree to check
*
* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}
return (0);
}
