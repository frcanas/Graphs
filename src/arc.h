#ifndef ARC_H
#define ARC_H

#include "node.h"

using namespace std;

// Arc class
class Arc
{

    // Create private attributes
    private:

        // Declare both nodes
        Node * first_node;
        Node * second_node;

        // Declare the attributes array
        vector<double> attributes;

    // Create the constructor, destructor, getters and setters
    public:

        // Class constructor
        Arc(Node * node1, Node * node2, size_t _attributes = 0);

        // Class destructor
        ~Arc();

        // Setter for first node
        void setFirstNode(Node * node1);

        // Getter for first node
        Node * getFirstNode();

        // Setter for second node
        void setSecondNode(Node * node2);

        // Getter for second node
        Node * getSecondNode();

        // Setter for an attribute
        void setAttribute(size_t index, double value);

        // Getter for an attribute
        double getAttribute(size_t index);

};

#endif