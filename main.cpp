
// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }

#include <iostream>
#include "Singleton.h"

int main() {
    // Access the Singleton instance and call its method
    Singleton::getInstance().doSomething();
    
    return 0;
}
