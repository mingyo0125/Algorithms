#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

Node* root = NULL;

Node* MakeNode(int data)
{
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void Insert(Node* r, Node* node)
{
	if (r == NULL) root = node;
	else if (r->data < node->data)
	{
		if (r->right == NULL)
		{
			r->right = node;
		}
		else
		{
			Insert(r->right, node);
		}
	}
	else
	{
		if (r->left == NULL)
		{
			r->left = node;
		}
		else
		{
			Insert(r->left, node);
		}
	}
}

void Hoo(Node* nd)
{
	if (nd == NULL) return;

	Hoo(nd->left);
	Hoo(nd->right);

	cout << nd->data << "\n";
}

int main()
{
	int input;
	while (cin >> input)
	{
		Insert(root, MakeNode(input));
	}
	Hoo(root);
}