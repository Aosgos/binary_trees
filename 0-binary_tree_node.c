binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL) {
        return NULL; // Failed to allocate memory for the new node
    }
    node->n = value;
    node->left = NULL;
    node->right = NULL;
    node->parent = parent;
    return node;
}

