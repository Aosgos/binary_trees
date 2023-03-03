binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL) {
        return NULL; // Invalid parent node pointer
    }
    
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL; // Failed to allocate memory for the new node
    }

    if (parent->left != NULL) {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return new_node;
}

