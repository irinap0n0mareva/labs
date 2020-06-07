#include "BinaryTree.h"

BinaryTree::BinaryTree() {
    root = nullptr;
}

void BinaryTree::FreeMemory(TreeNode* node) {
    if (node == nullptr)
        return;

    FreeMemory(node->GetLeft());
    FreeMemory(node->GetRight());
    delete node;
}

TreeNode* BinaryTree::Insert(TreeNode *node, int value) {
    if (node == nullptr)
        return new TreeNode(value);

    if (value < node->GetValue()) {
        node->SetLeft(Insert(node->GetLeft(), value));
    }
    else {
        node->SetRight(Insert(node->GetRight(), value));
    }

    return node;
}

void BinaryTree::Insert(int value) {
    root = Insert(root, value);
}

TreeNode* BinaryTree::Search(TreeNode *node, int value) {
    if (node == nullptr)
        return node;

    if (node->GetValue() > value)
        return Search(node->GetLeft(), value);

    if (node->GetValue() < value)
        return Search(node->GetRight(), value);
    
    return node;
}

TreeNode* BinaryTree::Search(int value) {
    return Search(root, value);
}

void BinaryTree::Print(TreeNode *node, int level) const {
    if (node == nullptr)
        return;

    Print(node->GetRight(), level + 1);
    for (int i = 0; i < level; i++)
        cout << "    ";
    cout << node->GetValue() << endl;
    Print(node->GetLeft(), level + 1);
}

void BinaryTree::Print() const {
    Print(root, 0);
}

BinaryTree::~BinaryTree() {
    FreeMemory(root);
}