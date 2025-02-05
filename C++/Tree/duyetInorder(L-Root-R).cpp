#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int u)
    {
        data = u;
        left = right = NULL;
    }
};

void makeNode(node *root, int x, int y, char z)
{
    if (z == 'L')
        root->left = new node(y);
    else
        root->right = new node(y);
}

void insertNode(node *root, int x, int y, char z)
{
    if (root == NULL)
        return;

    if (root->data == x)
        makeNode(root, x, y, z);
    else
    {
        insertNode(root->left, x, y, z);
        insertNode(root->right, x, y, z);
    }
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        node *root = NULL;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            char z;
            cin >> x >> y >> z;

            if (root == NULL)
            {
                root = new node(x);
                makeNode(root, x, y, z);
            }
            else
                insertNode(root, x, y, z);
        }

        inorder(root);
        cout << endl;
    }
    system("pause");
    return 0;
}