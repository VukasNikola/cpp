// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


class Inventroy{
public:
    //Add item to inventory
    void addItem(const std::string& item){//Not a setter since they modify member data elements
        if(items -> size() < capacity)
            items->push_back(item);
        else
            std::cout << "Inventory full, cannot add " << item << std::endl;
    }
    //Remove item from inventory
    void removeItem(const std::string& item){
        auto it = std::find(items->begin(),items->end(), item);//in <algorithm>
        if(it != items->end())
            items->erase(it);
        else  
            std::cout << "Item " << item << " not found" << std::endl;
    }
    std::string getItem(int index) const{//const correctness
        if(index <= 0 && index < items->size())
            return (*items)[index];
        else  
            return "Index out of bounds";    
    }
    int getItemCount() const{
        return items->size();
    }
    void displayInventory() const{
        std::cout << " Inventroy: [ ";
        for (size_t i=0; i < items->size(); i++){
            std::cout << (*items)[i] << ", ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<std::string> *items;
    int capacity;
    
};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
