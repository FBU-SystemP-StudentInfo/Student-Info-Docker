#include "db_connection.h"
#include <cstdlib>
#include <iostream>

bool connect_to_database() {
    const char* host = std::getenv("DB_HOST");
    const char* port = std::getenv("DB_PORT");
    const char* name = std::getenv("DB_NAME");
    const char* user = std::getenv("DB_USER");
    const char* password = std::getenv("DB_PASSWORD");

    if (!host || !port || !name || !user || !password) {
        std::cerr << "Database environment variables are not set." << std::endl;
        return false;
    }

    std::cout << "Database environment variables loaded successfully." << std::endl;
    std::cout << "Host: " << host << ", Port: " << port << std::endl;
    return true;
}
#include <iostream>
#include <cstdlib>
#include "db_connection.h"

void connect_to_database() {
    const char* host = std::getenv("DB_HOST");
    const char* port = std::getenv("DB_PORT");
    const char* name = std::getenv("DB_NAME");
    const char* user = std::getenv("DB_USER");

    std::cout << "Connecting to database..." << std::endl;

    if (!host || !port || !name || !user) {
        std::cout << "Database environment variables are missing!" << std::endl;
        return;
    }

    std::cout << "DB_HOST: " << host << std::endl;
    std::cout << "DB_PORT: " << port << std::endl;
    std::cout << "DB_NAME: " << name << std::endl;
    std::cout << "DB_USER: " << user << std::endl;

    std::cout << "Database connection simulated successfully." << std::endl;
}
