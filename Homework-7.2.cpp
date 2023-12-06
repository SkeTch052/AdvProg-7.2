#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <string>

template <typename Container>
void PrintContainer(const Container& c) {
    for (const auto& elem : c) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::set<std::string> set = { "one", "two", "three", "four" };
    std::vector<std::string> vector = { "one", "two", "three", "four" };
    std::list<std::string> list = { "one", "two", "three", "four" };

    std::cout << "Set: "; PrintContainer(set);
    std::cout << "Vector: "; PrintContainer(vector);
    std::cout << "List: "; PrintContainer(list);

    return 0;
}