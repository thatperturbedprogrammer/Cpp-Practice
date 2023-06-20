#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> shopping_list = {"Smartphone", "T-shirt" };

    shopping_list.push_back("Smart TV");
    shopping_list.push_back("Table");
    
    std::cout << "Size of Shopping List:\n";
    std::cout << shopping_list.size() << "\n\n";
    std::cout << "Items in Shopping List:\n";
    std::cout << shopping_list[0] << "\n";
    std::cout << shopping_list[1] << "\n";
    std::cout << shopping_list[2] << "\n";
    std::cout << shopping_list[3] << "\n";

}
