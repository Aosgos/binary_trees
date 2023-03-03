int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL) {
        return 0; // If node is NULL, return 0
    }

    if (node->left == NULL && node->right == NULL) {
        return 1; // If node has no children, it's a leaf, return 1
    } else {
        return 0; // Otherwise, it's not a leaf, return 0
    }
}

