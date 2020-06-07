#include "TreeNode.h"

TreeNode::TreeNode(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
}

int TreeNode::GetValue() const {
    return value;
}

TreeNode* TreeNode::GetLeft() const {
    return left;
}

TreeNode* TreeNode::GetRight() const {
    return right;
}

void TreeNode::SetValue(int value) {
    this->value = value;
}

void TreeNode::SetLeft(TreeNode* left) {
    this->left = left;
}

void TreeNode::SetRight(TreeNode* right) {
    this->right = right;
}