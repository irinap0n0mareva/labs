#include <iostream>
#include "TreeNode.h"

using namespace std;

class BinaryTree {
    TreeNode *root;

    void FreeMemory(TreeNode* node);
    TreeNode* Insert(TreeNode *node, int value);
    TreeNode* Search(TreeNode *node, int value);
    void Print(TreeNode *node, int level) const;
public:
    BinaryTree();

    void Insert(int value);
    TreeNode* Search(int value);

    void Print() const; 
    ~BinaryTree();
};
