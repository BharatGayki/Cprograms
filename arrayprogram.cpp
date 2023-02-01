
#include <iostream>
#include <vector>
#include <algorithm>


int main() 
{
    std::vector<std::string> array1 = {"This", "is", "a", "beautiful", "day"};
    std::vector<std::string> array2 = {"What", "a", "beautiful", "day"};
 
    std::vector<std::string> common;
 
    std::sort(array1.begin(), array1.end());
    std::sort(array2.begin(), array2.end());
 
    std::set_intersection(array1.begin(), array1.end(), 
                          array2.begin(), array2.end(), 
                          std::back_inserter(common));
 
    std::cout << "Common Elements: ";
    for (int i = 0; i < common.size(); i++)
        std::cout << common[i] << " ";
 
    return 0;
}