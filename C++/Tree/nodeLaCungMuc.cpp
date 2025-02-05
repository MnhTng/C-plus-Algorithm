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

void preorder(node *root, set<int> &s, int level)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        s.insert(level);
    preorder(root->left, s, level + 1);
    preorder(root->right, s, level + 1);
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

        set<int> s;
        preorder(root, s, 0);
        if (s.size() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}