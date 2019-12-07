#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a node
* @node: a pointer to the node to find the sibling
*
* Return: the node that is sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node == node->parent->right)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
return (NULL);
}
