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


// Tree functions and linked-list functions
void print_all(TreeNode* root)
{
    cout<<"Level order traversal"<<endl;
    queue<TreeNode*> q;

    cout<<endl;
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