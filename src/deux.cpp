#include <vector>
#include <string>
#include <deux.h>
#include <iostream>
int main()
{
    std::vector<std::string> v(5);
    v.push_back("Bonjour");
    v.push_back("commment");
    std::cout << v.size() << "\n";
    v.push_back("aller");
    v.push_back("vous");
    v.push_back("?");

    std::cout << v.size() << "\n";
    std::cout << v.capacity() << "\n";

    
    return 0;
}
