// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// enum asset_type {texture, sound, animation, script}; //C style, used to categorise assets in a video game. texture is 0, sound is 1, ...
// enum menu_section {background,music,sound,controls,texture};//both enumerations have texture and sound but have different values.
enum class asset_type {texture, sound, animation, script}; //add the class to fix the issue above. Now we have to use ::
enum class menu_section {background,music,sound,controls, texture};

int main(){

    int sound = 8; //compiler didn't complin about double declaration, also the asset_value is 8. sound is a local variable in the function then when we assign asset value to sound, it gets the local variable value. Problem is that names in the enumeration are global in scope
    int asset_value;// asset_type asset_value. THIS IS BETTER

    asset_value = (int) asset_type::sound; // like this the compiler doesn't assume anything, here we had to say what the asset_type::sound is because we set asset_value to be an integer. ONE OPTION

    std::cout << "asset_value = " << asset_value << std::endl;//you would have to add (int) in front of asset_value if you use the better option.

    std::cout << std::endl << std::endl;
    return 0;
}
