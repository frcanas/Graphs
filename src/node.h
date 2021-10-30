#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>

using namespace std;

// Node class
class Node
{

    // Create private attributes
    private:

        // Declare the node's ID
        size_t id;
        // Declare the attributes vector
        vector<double> attributes;

    // Create getters, setters and the constructor
    public:

        // Class constructor
        Node(size_t value, size_t params = 0);

        // Class destructor
        ~Node();

        // Setter for node's ID
        void setID(size_t value);

        // Getter for node's ID
        size_t getID();

        // Setter for an attribute
        void setAttribute(size_t index, double value);

        // Getter for an attribute
        double getAttribute(size_t index);

};

#endif