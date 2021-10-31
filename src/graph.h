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
        // Notice how Arcs is a vector of pointers to vectors
        //   Each element of Arcs is a pointer to a vector of
        //   pointers to arcs. The first decision (making it
        //   a vector of pointers to vectors of pointers
        //   instead of a vector of vectors of pointers) is
        //   was made to make the process of adding or removing
        //   nodes much easier - instead of copying around
        //   large vectors, we simply copy pointers and keep
        //   these vectors still.
        vector<Node *> Nodes;
        vector<vector<Arc *> *> Arcs;

        // Keep track of the number of nodes and arcs
        size_t numberOfNodes;
        size_t numberOfArcs;

    // Create the constructor, destructor, getters and setters
    public:

        // Class constructor
        Graph(vector<Node *> &_nodes, vector<Arc *> &_arcs);

        // Class destructor
        ~Graph();

        // Add a node
        void addNode(Node * node);

        // Remove a node (and any associated arcs)
        void removeNode(size_t id);

        // Get a node
        Node * getNode(unsigned int ID);

        // Add an arc
        void addArc(Arc * arc);

        // Remove an arc
        void removeArc(Node * first_node, Node * second_node);

        // Get an arc
        Arc * getArc(Node * first_node, Node * second_node);

        // Set the number of nodes in the graph
        void setNumberOfNodes(size_t _numberOfNodes);

        // Get the number of nodes in the graph
        size_t getNumberOfNodes();

        // Set the number of arcs in the graph
        void setNumberOfArcs(size_t _numberOfArcs);

        // Get the number of arcs
        size_t getNumberOfArcs();

};

#endif