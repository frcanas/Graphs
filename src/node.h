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
        static size_t next_id;

        // Declare the attributes vector
        vector<double> attributes;

    // Create the constructor, destructor, getters and setters
    public:

        // Class constructor
        Node(size_t _attributes = 0);

        // Class destructor
        ~Node();

        // Setter for node's ID
        void setID(size_t _id);

        // Getter for node's ID
        size_t getID();

        // Setter for an attribute
        void setAttribute(size_t index, double value);

        // Getter for an attribute
        double getAttribute(size_t index);

};

#endif