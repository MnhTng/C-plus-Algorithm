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

void level(node *root)
{
    queue<node *> q;
    q.push(root);

    int levelSize = 1, count = 0;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->left != NULL)
        {
            q.push(temp->left);
            count++;
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
            count++;
        }

        levelSize--;
        if (levelSize == 0)
        {
            cout << endl;
            levelSize = count;
            count = 0;
        }
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

        vector<node *> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x != -1)
                v[i] = new node(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] != NULL)
            {
                int nodeL = 2 * i + 1;
                int nodeR = 2 * i + 2;

                if (nodeL < n)
                    v[i]->left = v[nodeL];
                if (nodeR < n)
                    v[i]->right = v[nodeR];
            }
        }

        level(v[0]);
    }
    system("pause");
    return 0;
}