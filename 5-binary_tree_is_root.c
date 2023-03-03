int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL) {
        return 0; // If node is NULL, return 0
    }

    if (node->parent == NULL) {
        return 1; // If node has no parent, it's a root, return 1
    } else {
        return 0; // Otherwise, it's not a root, return 0
    }
}

