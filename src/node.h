#ifndef NODE_H
#define NODE_H

#include <unordered_map>

using namespace std;

// Node class
class Node
{

    // Create private attributes
    private:

        // Declare the node's ID
        unsigned int id;
        // Declare the attributes map
        unordered_map<string,double> attributes;

    // Create getters, setters and the constructor
    public:

        // Setter for node's ID
        void setID(unsigned int value)
        {
            id = value;
        }

        // Getter for node's ID
        unsigned int getID()
        {
            return id;
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
        Node(unsigned int value)
        {
            setID(value);
        }

};

#endif