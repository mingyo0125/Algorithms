#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

node* MakeNode(int a);
void postorder(node* nd);
void Insert(node* r, node* node);

node* root = NULL;

int main()
{
	int input;
	int previous = 0;
	while (cin >> input)
	{
		Insert(root, MakeNode(input));
	}
	postorder(root);
	return 0;
}

node* MakeNode(int a)
{
	node* nd = new node();
	nd->left = NULL;
	nd->right = NULL;
	nd->data = a;
	return nd;
}

void Insert(node* r, node* node)
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

void postorder(node* nd)
{
	if (nd == NULL) { return; }

	postorder(nd->left);
	postorder(nd->right);

	cout << nd->data << endl;
}