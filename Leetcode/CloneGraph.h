//
// Created by Administrator on 10/12/2025.
//

#ifndef LEETCODE_CLONEGRAPH_H
#define LEETCODE_CLONEGRAPH_H
#include <vector>

class Node {
    public:
    int val;
    std::vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = std::vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = std::vector<Node*>();
    }
    Node(int _val, const std::vector<Node*> &_neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

Node* cloneGraph(Node* node);
void printGraph(Node* node);
#endif //LEETCODE_CLONEGRAPH_H