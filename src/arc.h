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
        unordered_map<string,double> attributes;

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
        void setAttribute(string & key, double value)
        {
            attributes[key] = value;
        }

        // Getter for an attribute
        double getAttribute(string & key)
        {
            return attributes[key];
        }

        // Class constructor
        Arc(Node * node1, Node * node2)
        {
            setFirstNode(node1);
            setSecondNode(node2);
        }

};

#endif