
#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <set>
#include <queue>
using namespace std;

//checking if a valid path exists between two nodes in graph
void printGraph(unordered_map<char,vector<char>>& graph){
    cout<<"Printing graph...\n";
    for(auto i: graph){
        cout<<i.first<<": [";
        for (int j=0; j<i.second.size();j++){
            cout<<"'"<<i.second[j]<<"'";
        }
        cout<<" ],\n";
    }
}

void buildGraph(const vector<vector<char>>& edges,unordered_map<char,vector<char>>& graph){

    for(int i=0; i<edges.size();i++){
        char node1 = edges[i][0];
        char node2 = edges[i][1];

        if(graph.find(node1) == graph.end()){
            graph[node1] = {};
        }
        if(graph.find(node2) == graph.end()){
            graph[node2] = {};
        }

        graph[node1].push_back(node2);
        graph[node2].push_back(node1);

        // printGraph(graph);
    }

}

// bool hasPathDFS(unordered_map<char,vector<char>>& graph, char src, char dst){
//     stack<char> stk;
//     stk.push(src);
//     set<char> visited;

//     while(!stk.empty()){
//         char currNode = stk.top();
//         stk.pop();
//         visited.insert(currNode);

//         if(currNode == dst){
//             return true;
//         }

//         for(int i=0; i<graph[currNode].size();i++){
//             char node = graph[currNode][i];
//             if(visited.find(node) == visited.end()){
//                 stk.push(node);
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     const vector<vector<char>> edges = {{'i','j'},{'k', 'i'},{'m', 'k'},{'k', 'l'},{'o', 'n'}};
//     unordered_map<char,vector<char>> graph;
//     buildGraph(edges,graph);
//     cout<< hasPathDFS(graph, 'i','l');

// }

// // counting CONNECTED COMPONENTS
// vector<int> componentsInGraph(vector<vector<int>> gb)
// {
//     unordered_map<int, vector<int>> graph;
//     set<int> nodes;
//     set<int> visited;
//     int components{0};

//     for (int i = 0; i < gb.size(); i++)
//     {
//         int node1 = gb[i][0];
//         int node2 = gb[i][1];

//         if (graph.find(node1) == graph.end())
//         {
//             graph[node1] = {};
//             nodes.insert(node1);
//         }
//         if (graph.find(node2) == graph.end())
//         {
//             graph[node2] = {};
//             nodes.insert(node2);
//         }
//         graph[node1].push_back(node2);
//         graph[node2].push_back(node1);
//     }

//     vector<int> sizeofComponents;
//     set<int> nodesinComps{0};

//     int smallest = INT16_MAX;
//     int largest = 0;

//     for (auto it : nodes)
//     {
//         if (visited.find(it) != visited.end())
//         {
//             continue;
//         }
//         stack<int> stk;
//         stk.push(it);

//         int nodesinComp{0};
//         while (!stk.empty())
//         {
//             int currNode = stk.top();
//             visited.insert(currNode);
//             nodesinComp++;
//             stk.pop();

//             for (int i = 0; i < graph[currNode].size(); i++)
//             {
//                 int node = graph[currNode][i];
//                 if (visited.find(node) == visited.end())
//                 {
//                     stk.push(node);
//                 }
//             }
//         }

//         components++;
//         if (nodesinComp != 1)
//             smallest = min(smallest, nodesinComp);
//         largest = max(largest, nodesinComp);
//     }

//     vector<int> groups{smallest, largest};
//     return groups;
// }

// int main()
// {
//     vector<vector<int>> edges{{1, 6}, {2, 7}, {3, 8}, {4, 9}, {2, 6}};
//     // int components= componentsInGraph(edges);
//     // cout<<components;
// }


//FINDING SHORTEST PATH IN A GRAPH WITH UNIT LENGTH OF COST TO COME
typedef pair<char,int> node;

int shortestPath(vector<vector<char>> &edges, char start, char goal){

    unordered_map<char,vector<char>> graph;

    buildGraph(edges, graph);
    set<char> visited;
    printGraph(graph);
    queue<node> q;

    q.push(make_pair(start,0));

    while(!q.empty()){
        char node = q.front().first;
        int dist = q.front().second;
        q.pop();
        visited.insert(node);

        if(node == goal){
            return dist;
        }

        auto child = graph[node];
        for(int i=0; i<child.size();i++){
            if(visited.find(child[i]) == visited.end()){
                q.push(make_pair(child[i],1+dist));
            }
        }
    }    

    return -1;

}

int main(){

    vector<vector<char>> edges = {{'w','x'},{'x','y'},{'z','y'},{'z','v'},{'w','v'}};

    int length = shortestPath(edges, 'w', 'i');

    cout<<length;
}