#include <iostream>

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;
};

int sum(int n)
{
	if (n == 0)
		return 0;
	return n + sum(n - 1);
}

void preorder(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }
	std::cout << root->value << " ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(TreeNode* root)
{
	if (root == nullptr)
	{
		return;
	}
	inorder(root->left);
	std::cout << root->value << " ";
	inorder(root->right);
}
void postorder(TreeNode* root)
{
	if (root == nullptr)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	std::cout << root->value << " ";
}
int main()
{
    std::cout << sum(4) << std::endl;
    TreeNode root{ 8, nullptr, nullptr };
	TreeNode leftClild{ 4, nullptr, nullptr };
	root.left = &leftClild;
	TreeNode rightChild{ 12, nullptr, nullptr };
	root.right = &rightChild;
	TreeNode leftLeftChild{ 2, nullptr, nullptr };
	leftClild.left = &leftLeftChild;
	TreeNode leftRightChild{ 6, nullptr, nullptr };
	leftClild.right = &leftRightChild;
	std::cout << "前序：";
	preorder(&root);
	std::cout << std::endl;

	std::cout << "中序：";
	inorder(&root);
	std::cout << std::endl;

	std::cout << "后序：";
	postorder(&root);
	std::cout << std::endl;

    return 0;
}
