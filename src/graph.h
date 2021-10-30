#ifndef GRAPH_H
#define GRAPH_H

#include "arc.h"

using namespace std;

// Graph class
class Graph
{

    // Create private attributes
    private:

        // Declare the sets of nodes and arcs
        unordered_map<unsigned int, Node *> Nodes;
        unordered_map<vector<Node *>, Arc *> Arcs;

    // Create getters, setters and the constructor
    public:

        // Add a node
        void addNode(Node * node)
        {
            Nodes[node->getID()] = node;
        }

        // Get a node
        Node * getNode(unsigned int ID)
        {
            return Nodes[ID];
        }

        // Add an arc
        void addArc(Arc * arc)
        {
            Arcs[arc->getID()] = arc;
        }

        // Get an arc
        Arc * getArc(Node * first_node, Node * second_node)
        {
            vector<Node *> ID = { first_node, second_node };
            return Arcs[ID];
        }

};

#endif