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

void perfectTree(node *root, set<int> &s, int count, int &check)
{
    if (root == NULL)
        return;

    if (root->left != NULL && root->right != NULL)
    {
        perfectTree(root->left, s, count + 1, check);
        perfectTree(root->right, s, count + 1, check);
    }
    else if (!(root->left == NULL && root->right == NULL))
    {
        check = 0;
        return;
    }
    else
        s.insert(count);
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
        int check = 1;
        perfectTree(root, s, 0, check);
        if (!check)
            cout << "NO" << endl;
        else if (s.size() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}