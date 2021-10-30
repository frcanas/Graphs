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

        // Declare the attributes map
        vector<double> attributes;

    // Create getters, setters and the constructor
    public:

        // Setter for first node
        void setFirstNode(Node * node1)
        {
            first_node = node1;
        }

        // Getter for first node
        Node * getFirstNode()
        {
            return first_node;
        }

        // Setter for second node
        void setSecondNode(Node * node2)
        {
            second_node = node2;
        }

        // Getter for second node
        Node * getSecondNode()
        {
            return second_node;
        }

        // Setter for an attribute
        void setAttribute(size_t index, double value)
        {
            attributes[index] = value;
        }

        // Getter for an attribute
        double getAttribute(size_t index)
        {
            return attributes[index];
        }

        // Class constructor
        Arc(Node * node1, Node * node2, size_t params = 0)
        {
            setFirstNode(node1);
            setSecondNode(node2);
            attributes.resize(params,0);
        }

};

#endif