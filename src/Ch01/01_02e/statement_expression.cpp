#include <iostream>


int main(){

    int a = 5; //declaration statement
    int b = 3;
    int c = a + b; //declaration statement with expression

    if (c > 5){ //conditional statement with an expression
        std::cout << "c is greater than 5"; //output statement
    }

    return 0; //return statement
}
//Identifiers are names given in declaration statements
//cannot begin with number.
//must be from the standard used: int,static,float...
//case sensitive... speed != SPEED, x != X. Older compilers have a restriction to 31 character identifiers.
//best practices, use meaningful names,follow naming convetions camelCase, PascalCase, snake_case..., don't abuse case sensitivity. Avoid _ at the start of identifiers.


/*
Modeling is crutial to OOP...
Modeling a house:
Challenge is to choose the best features without oversimplifying...
Encapsulation, models contain only information about itself

Classes: contain members of two types: data and functions like

House.rooms, House.paint() 

An instance of a class is an object

Access Specifiers class members may be public or private

Protected members can be accessed in inhereted classes
Inheretence and Polymorphyism


NAMESPACES
Each standard library header (e.g., <iostream>, <string>) contains its own code.

All identifiers within these headers are organized inside the std namespace.

This structure helps prevent naming conflicts with user-defined code.

Using std:: before a name (like std::string) specifies that you're accessing the standard library's version of that identifier.
*/