void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL) {
        return; // If tree is NULL, do nothing
    }

    binary_tree_delete(tree->left); // Recursively delete left subtree
    binary_tree_delete(tree->right); // Recursively delete right subtree

    free(tree); // Free memory for the current node
}
