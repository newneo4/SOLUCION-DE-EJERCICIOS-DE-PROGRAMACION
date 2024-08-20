//https://www.geeksforgeeks.org/problems/huffman-encoding3345/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct Node{
    char data;
    int freq;
    Node* left;
    Node* right;
    
    Node(char data, int freq){
        this->data = data;
        this->freq = freq;
        left = right = NULL;
    }
};

class Compare{
    public:
        bool operator()(Node * left, Node * right){
            return left ->freq > right ->freq;
        }
};

class Solution
{
	public:
	    
		Node *generateTree(priority_queue<Node *, vector<Node*>,Compare>pq){
		    while(pq.size() > 1){
		        Node *left = pq.top(); 
		        pq.pop();
		        
		        Node *right = pq.top(); 
		        pq.pop();
		        
		        Node *aux = new Node('$', left->freq + right->freq);
		        
		        aux->left = left;
		        aux->right = right;
		        
		        pq.push(aux);
		    }
		    
		    return pq.top();
		}
	    
	    void printCodes(Node *root, int arr[], int top, vector<string>&aux){
	        if(root->left){
	            arr[top] = 0;
	            printCodes(root->left, arr, top + 1, aux);
	        }
	        
	        if(root->right){
	            arr[top] = 1;
	            printCodes(root->right, arr, top + 1, aux);
	        }
	        
	        if(!root->left && !root->right){
	            string temp = "";
	            for(int i = 0; i < top; i++) temp += char(arr[i] +'0');
	            
	            aux.push_back(temp);
	        }
	    }
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    vector<string>ans;
		    int top = 0, arr[100];
		    
		    priority_queue<Node *, vector<Node*>, Compare>pq;
		    
		    for(int i = 0; i < N; i++){
		        Node *aux = new Node(S[i], f[i]);
		        pq.push(aux);
		    }
		    
		    Node *root =  generateTree(pq);
            		    
		    printCodes(root, arr, top, ans);
		    
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends