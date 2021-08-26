#include<bits/stdc++.h>
using namespace std;

//Structures
struct TreeNode
{
    int val;
    struct TreeNode *left,*right;
    TreeNode(): val(0),left(NULL),right(NULL){}
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


// 1) Mathematical functions
int randint(int k)
{
    //cout<<"random integer generator range [1,k]\n";
    //srand(time(0));
    return (rand() % k) + 1;
}

int randint()
{
    srand(time(0));
    return (rand() + 1);
}

string createString(int n)
{
    string s = "";
    for(int i=0;i<n;i++)
    {
        int x = rand()%26;
        s.push_back('a' + x);
    }
    return s;
}

// split a string
vector<string> split(string  s,string deli)
{
    int n = s.size();
    int dn = deli.size();
    vector<string> sol;
    if(n<2 || (s.find(deli) == -1))
    {
        sol.push_back(s);
        return sol;
    }

    int pos = s.find(deli);
    while(pos != -1)
    {
        string token = s.substr(0,pos);
        sol.push_back(token);
        pos += dn;
        s.erase(0,pos);
        pos = s.find(deli);
    }
        
    sol.push_back(s);
    return sol;
}


vector<int> createArray(int n)
{
    vector<int> sol;
    int mx = n*10;
    for(int i=0;i<n;i++)
    {
        int x = randint(mx);
        sol.push_back(x);
    }
    return sol;
}

void print_all(vector<string>& v)
{
    for(string s:v) cout<<s<<"\n";
    cout<<endl;
}

void print_all(vector<int>& nums)
{
    for(int x:nums) cout<<x<<" ";
    cout<<endl;
}
// Tree functions and linked-list functions
void print_all(TreeNode* root)
{
    cout<<"Level order traversal"<<endl;
    if(root == NULL)
    {
        cout<<"NULL"<<endl;
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
        int l = q.size();
        TreeNode* curr;
        while(l--)
        {
            curr = q.front(); q.pop();
            if(curr == NULL)
            {
                cout<<"NULL"<<" ";
            }
            else
            {
                cout<<curr->val<<" ";
                q.push(curr->left);
                q.push(curr->right);
            }
        }
    }
    cout<<endl;
    return;
}
void print_all(ListNode* head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }

    cout<<endl;
}

ListNode* createList(int n)
{
    // n is the length of the list
    int mx = n*10;
    ListNode* head = new ListNode(randint(mx));

    ListNode* curr = head;
    for(int i=1;i<n;i++)
    {
        int value = randint(mx);
        curr->next = new ListNode(value);
        curr = curr->next;
    }
    return head;
}