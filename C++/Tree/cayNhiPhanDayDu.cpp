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

void fullTree(node *root, int &check)
{
    if (root->left != NULL && root->right != NULL)
    {
        fullTree(root->left, check);
        fullTree(root->right, check);
    }
    else if (!(root->left == NULL && root->right == NULL))
    {
        check = 0;
        return;
    }
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

        int check = 1;
        fullTree(root, check);
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}