#pragma once

#include <iostream>

using namespace std;

class TreeNode {
    int value;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode(int value = 0);

    int GetValue() const;
    TreeNode* GetLeft() const;
    TreeNode* GetRight() const;
    void SetValue(int value);
    void SetLeft(TreeNode* left);
    void SetRight(TreeNode* right);
};