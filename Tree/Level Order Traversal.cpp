class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node*>q;
      vector<int>v;
      q.push(node);
      while(!q.empty()){
          int size = q.size();
          for(int i = 0  ; i<size ; i++){
          Node* temp = q.front();
          v.push_back(temp->data);
          q.pop();
          if(temp->left)q.push(temp->left);
          if(temp->right)q.push(temp->right);
          }
          
      }
          return v;

    }
};
