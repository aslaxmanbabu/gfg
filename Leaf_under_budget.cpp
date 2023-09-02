class Solution
{
public:
    list<int> arr;
    int sum=0, count=0, l=1;
    
    void test(Node *root, int k) {
        if (root == NULL) {
            return ;
        }
        if(root->left == NULL and root->right == NULL) {
            arr.push_back(k);
        }
        if(root->left) {
            k++;
            test(root->left, k);
            k--;
        }
        if(root->right) {
            k++;
            test(root->right, k);
            k--;
        }
    }
    
    int getCount(Node *root, int k)
    {
        arr.clear();
        test(root, l);
        
        arr.sort();
        list<int> :: iterator it;
        for(it=arr.begin(); it != arr.end() and sum<=k; it++) {
            
            sum = sum + *it;
            if(sum<=k) {
                count++;
            }
        }
        return count;
    }
};
