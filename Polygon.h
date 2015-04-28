#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED

#include <string>
#include "LinkedList.h"

class Polygon{

private:
    int number_of_vertices;
    LinkedList *list_of_vertice_information;


    int weightFunction(std::string v_i, std::string v_j, std::string v_k){
        return 0;


    }
    int euclideanDistance(std::string v_i, std::string v_j){return 0;}


public:

Polygon(int temp_number_of_vertices, LinkedList *temp_list){
    number_of_vertices = temp_number_of_vertices;
    list_of_vertice_information = temp_list;
}
int getNumberOfVertices(){
    return number_of_vertices;
}
LinkedList *getVerticeCoordinateList(){
    return list_of_vertice_information;
}
std::string getVerticeAtIndex(int index){
    list_of_vertice_information->setIterator();

    for(int i = 0; i < list_of_vertice_information->getLength(); i++){
        if(i == index){
            return list_of_vertice_information->getDataOfIterator();
        }
        else {
            list_of_vertice_information->moveIterator();
        }
    }
    return "0 0";
}




};






#endif // POLYGON_H_INCLUDED
