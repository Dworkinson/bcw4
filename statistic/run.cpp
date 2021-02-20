#include <iostream>
// #include <string>
// #include <iomanip>

// std::string getString() {
//     while (true) {
//         std::cout << "Enter a double value: ";
//         std::string a;
//         std::cin >> a;

//         if (std::cin.fail()) // если предыдущее извлечение не выполнилось или произошло переполнение, 
//         {
//             std::cin.clear();
//             std::cin.ignore(32767, '\n');
//         } 
//         else 
//         {
//             return a;
//         }
//     }
// }

void print(char *a) {
    for ( ; *a != 0; a++ ) {
        std::cout << a << std::endl;
    }
}

int main() {
    char *a;
    a = new char;
    std::cin >> a;
    // print(a);
    std::cout << a << std::endl;

    return 0;
}