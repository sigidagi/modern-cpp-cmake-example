#include "employee.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

    Employee myEmployee(1, "Joe", "Blow");
    std::cout << myEmployee << "\n";

    return 0;
}
