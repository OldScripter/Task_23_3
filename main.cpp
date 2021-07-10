#include <iostream>

#define WINTER


#if defined SUMMER
int main() {
    std::cout << "SUMMER" << std::endl;
    return 0;
}
#endif

#if defined WINTER
int main() {
    std::cout << "WINTER" << std::endl;
    return 0;
}
#endif

#if defined AUTUMN
int main() {
    std::cout << "AUTUMN" << std::endl;
    return 0;
}
#endif

#if defined SPRING
int main() {
    std::cout << "SPRING" << std::endl;
    return 0;
}
#endif








