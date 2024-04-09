/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr){
            return nullptr;
        }
        queue<Node*> qt;
        qt.push(root);
        while(!qt.empty()){
            int n = qt.size();
            Node* prev = nullptr;
            for(int i = 0 ; i < n ; i++){
                Node* temp = qt.front();
                qt.pop();
                if(prev != nullptr){
                    prev->next = temp;
                }
                prev = temp;
                if (temp->left != nullptr){
                    qt.push(temp->left);
                }
                if(temp->right != nullptr){
                    qt.push(temp->right);
                }
            }
            prev->next = nullptr;
        }
        return root;
    }
};