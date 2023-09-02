map<int, list<int>> arr;

void printGivenLevel(Node* root, int level, int i)
{
    if (root == NULL)
        return;
    
    if (level == 1) {
        //cout<<"Level: "<<i<<" Data: "<<root->data<<endl;
        arr[i].push_back(root->data);
    }
    else if (level > 1) {
        printGivenLevel(root->left, level - 1, i);
        printGivenLevel(root->right, level - 1, i);
    }
}

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
        
        int lheight = height(node->left);
        int rheight = height(node->right);
        
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

void printCorner(Node *root)
{
    arr.clear();
    int h = height(root);
    int i, k;
    for (i = 1; i <= h; i++) {
        printGivenLevel(root, i, i);
    }
    cout<<arr[1].front()<<" ";
    for (i = 2; i <= h; i++) {
        cout<<arr[i].front()<<" ";
        if (arr[i].size() != 1) {
            cout<<arr[i].back()<<" ";
        }
    }

}
