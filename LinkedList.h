#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <string>
#include "Node.h"

class LinkedList{

private:
    Node * head; //This points to the first element of the linked list. It is used to point to the first element of the list. This should never be manipulated out of add.
    Node * traversalNode; //Points to the getNext of Head. This shows all of the elements that are connected to the node.
    Node * iteratorNode; //Allows you to move an iterator through every element of the linked list; including the head.
    int lengthOfList;
public:
    LinkedList(){
        head = NULL;
        traversalNode = NULL;
        lengthOfList = 0;
    }
    //This is the constructor if you want to use the linked list with a traversal node.
    LinkedList(std::string initialString){
        Node * initialNode = new Node(initialString, traversalNode);
        head = initialNode;
        traversalNode = NULL;
        lengthOfList = 1;
    }
    //Adds the element to the linked list by adding it AFTER the head, but before any other existing elements.
    void addToTraversal(std::string stringToBeAdded){
        Node *nodeToBeAdded = new Node(stringToBeAdded, traversalNode);
        head->setNext(nodeToBeAdded);
        traversalNode = nodeToBeAdded;
        lengthOfList++;
    }
    //Returns the string of the head of the linked list.
    std::string getDataOfHead(){
        return head->getData();
    }
    //Returns the head of the linked list.
    Node * getNodeHead(){
        return head;
    }

    //Gets the string data from the node of the traversal pointer.
    std::string getDataOfTraversal(){
        return traversalNode->getData();
    }
    Node * getTraversalNode(){
        return traversalNode;
    }
    //Moves the traversal node up by one element (node).
    void moveTraversalNode(){
        traversalNode = traversalNode->getNext();
    }
    //Creates or restores the traversalNode back to head->getNext()
    void setTraversal(){
        traversalNode = head->getNext();
    }
    //Creates or restores the iterator to the first node of the linked list.
    void setIterator(){
        iteratorNode = head;
    }
    //Moves the iterator up by one element.
    void moveIterator(){
        iteratorNode = iteratorNode->getNext();
    }
    //Gets the string data of the current iterator position (the node of)
    std::string getDataOfIterator(){
        return iteratorNode->getData();
    }
    //Gets the node of the iterator position.
    Node * getIterator(){
        return iteratorNode;
    }
    //Adds a NODE object to the linked list given a string object.
    void add(std::string stringToBeAdded){
        //If the below conditional is taken, it means that the list was empty and that this is the first element to be inserted.
        if(head == NULL){
            Node *nodeToBeAdded = new Node(stringToBeAdded, NULL);
            head = nodeToBeAdded;
            lengthOfList++; //Increasing the list length by one since an element was added.
        }
        //If this element to be added is NOT the first element to be added.
        else if(head != NULL){
            Node *nodeToBeAdded = new Node(stringToBeAdded, head);
            head = nodeToBeAdded;
            lengthOfList++; //Increasing the list length by one since an element was added.
        }
        //If the above two conditionals are not taken, an error branch print statement is given.
        else{
            std::cout << "The string was not added to the linked list. Program stability is unknown." << std:: endl;
        }

    }
    //Adds a NODE to think linked list given a NODE object.
    void add(Node *nodeToBeAdded){
        if(head == NULL){
            head = nodeToBeAdded;
            nodeToBeAdded->setNext(NULL);
            lengthOfList++; //Increasing the list length by one since an element was added.
        }
        else if(head != NULL){
            nodeToBeAdded->setNext(head);
            head = nodeToBeAdded;
            lengthOfList++; //Increasing the list length by one since an element was added.
        }
        //If the above two conditionals are not taken, an error branch print statement is given.
        else{
           std::cout << "The node was not added to the linked list. Program stability is unknown." << std::endl;
        }
    }
    //Returns the length of the list.
    int getLength(){
        return lengthOfList;
    }
    //Print all elements within the linked list.
    void print(){
        Node * printerNode = head; //Putting the head variable into the temp node (printerNode) so we don't mess with the head's position.
        int i = 0;
        while(printerNode != NULL){ //Iterating through the entire linked list.

            if(i == 0){
                std::cout << "The first element of the linked list is: " << printerNode->getData();
                printerNode = printerNode->getNext();
                i++;
            }
            else{
                std::cout << " " << printerNode->getData() << " ";
                printerNode = printerNode->getNext();
            }
        }
    }


};

#endif // LINKEDLIST_H_INCLUDED
