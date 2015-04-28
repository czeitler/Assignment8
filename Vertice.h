#ifndef VERTICE_H_INCLUDED
#define VERTICE_H_INCLUDED

#include <string>


class Vertice{

private:
    int x;
    int y;


public:
    Vertice(std::string input_to_convert_to_x_y){
        std::string delimiter = " ";
        std::string temp_x = input_to_convert_to_x_y(0, input_to_convert_to_x_y.find(delimiter));
        std::string temp_y = input_to_convert_to_x_y(input_to_convert_to_x_y.find(delimter));
        x = std::stoi(temp_x);
        y = std::stoi(temp_y);
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }




};

#endif // VERTICE_H_INCLUDED
