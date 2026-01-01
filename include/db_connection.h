#ifndef DB_CONNECTION_H
#define DB_CONNECTION_H

/**
 * @file db_connection.h
 * @brief Database connection interface for Week 3.
 *
 * This module prepares the database connection layer.
 * Actual database logic will be implemented in later weeks.
 */

class DBConnection {
public:
    DBConnection();
    ~DBConnection();

    void connect();
};

#endif // DB_CONNECTION_H
