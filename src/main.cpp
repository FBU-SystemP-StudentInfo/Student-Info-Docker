#include <iostream>
#include "db_connection.h"

int main() {
    std::cout << "Student app starting..." << std::endl;

    connect_to_database();

    return 0;
}
