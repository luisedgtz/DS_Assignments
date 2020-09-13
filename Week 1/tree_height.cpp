#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node;

class Node{
    public:
    int key;
    Node *parent;
    vector<Node*> children;

    Node(){
        this->parent = NULL;
    }

    void setParent(Node *theParent){
        parent = theParent;
        parent -> children.push_back(this);
    }
};

int findHeight(vector<Node>& nodes){
    if (nodes.empty()){
        return 0;
    }else{
        queue<Node> q;
        q.push(nodes[0]);

        while(!q.empty()){
            
        }
        

    }

}

int main(){
    int n;
    cin >> n;

    vector<Node> nodes;
    nodes.resize(n);

    for(int cIndex = 0; cIndex < n; cIndex++){
        int pIndex;
        cin >> pIndex;
        if(pIndex >=0){
            nodes[cIndex].setParent(&nodes[pIndex]);
        }
        nodes[cIndex].key = cIndex;
    }

    cout << findHeight(nodes) << endl;
    return 0;
}