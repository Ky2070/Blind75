#include "CloneGraph.h"

#include <iostream>
#include <map>
#include <ostream>
#include <stack>
//What dsa to use: DFS with Stack
Node* cloneGraph(Node *node) {
    std::map<Node*, Node*> maps;
    std::stack<Node*> stack;
    if (node == NULL) {
        return NULL;
    }
    maps[node] = new Node(node->val);
    stack.push(node);
    while (!stack.empty()) {
        Node *u = stack.top();
        stack.pop();
        for (auto v : u->neighbors) {
            if (maps.count(v) == 0) {
                maps[v] = new Node(v -> val);
                stack.push(v);
            }
            //add interlink from clone(u) -> clone(v)
            maps[u]->neighbors.push_back(maps[v]);
        }
    }
    return maps[node];
}
void printGraph(Node *node) {
    std::map<Node*, bool> visited;
    std::stack<Node*> stack;

    if (node == NULL) {
        std::cout<<"Empty Graph"<<std::endl;
        return;
    }
    stack.push(node);
    visited[node] = true;
    while (!stack.empty()) {
        Node *u = stack.top();
        stack.pop();
        std::cout<<"Node"<<u->val<<" -> ";
        for (auto v : u->neighbors) {
            std::cout<< v->val << " ";
            if (!visited[v]) {
                visited[v] = true;
                stack.push(v);
            }
        }
        std::cout<<std::endl;
    }
}
