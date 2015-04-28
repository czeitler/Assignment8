#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <string>

extern int numberOfNodes; //There can only be as many connections as nodes in the program, -1.

class Node{

private:
    std::string data;
    Node *next;
    int getASCIIValue(std::string convertedString, int lengthOfString);

public:
    /*
    Creates a new node with all null connections and parents.
    */
    Node();
    /*
    Creates a node and attaches the tempData to it, and selects the node that it should be pointing to
    This constructor does NOT set all connections and parents to null.
    */
    Node(std::string tempData, Node * nextNode);
    /*
    Returns the node that the node is pointing to.
    */
    Node * getNext();
    std::string getData(); //Returns the data of the node.
    void setNext(Node * nextNode); //sets the next node pointer.
    void setData(std::string tempData); //sets the data of the node.

};
//Ignore all implementation; just look at class details.
//This is a private method. Can only be called within the class.
int Node::getASCIIValue(std::string convertedString, int lengthOfString){

    int total = 0;

    for(int i = 0; i < lengthOfString; i++){
        char x = convertedString.at(i);
        total += int(x);
    }
    return total;
}
Node::Node(){
    data = "";
    next = NULL;
}
Node::Node(std::string tempData, Node* nextNode){
    data = tempData;
    next = nextNode;
}
Node* Node::getNext(){
    return next;
}
std::string Node::getData(){
    return data;
}
void Node::setNext(Node * nextNode){
    next = nextNode;
}
void Node::setData(std::string tempData){
    data = tempData;
}
#endif // NODE_H_INCLUDED
