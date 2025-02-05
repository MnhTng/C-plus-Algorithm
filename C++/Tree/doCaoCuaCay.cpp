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

void spiral(node *root, int count)
{
    stack<node *> st1, st2;
    st1.push(root);

    bool check1 = false, check2 = false;
    while (!st1.empty() || !st2.empty())
    {
        while (!st1.empty())
        {
            check1 = true;
            node *temp = st1.top();
            st1.pop();

            if (temp->right != NULL)
                st2.push(temp->right);
            if (temp->left != NULL)
                st2.push(temp->left);
        }
        if (check1)
        {
            check1 = !check1;
            count++;
        }

        while (!st2.empty())
        {
            check2 = true;
            node *temp = st2.top();
            st2.pop();

            if (temp->left != NULL)
                st1.push(temp->left);
            if (temp->right != NULL)
                st1.push(temp->right);
        }
        if (check2)
        {
            check2 = !check2;
            count++;
        }
    }

    cout << count - 1 << endl;
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

        spiral(root, 0);
    }
    system("pause");
    return 0;
}