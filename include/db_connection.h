#ifndef DB_CONNECTION_H
#define DB_CONNECTION_H

/**
 * @file db_connection.h
 * @brief Database connection interface (Week 3)
 *
 * This header defines the DBConnection class, which represents
 * the database connection layer of the application.
 *
 * Week 3 scope:
 * - Introduce a clean interface for database connectivity
 * - Prepare the project structure for PostgreSQL integration
 * - No real database logic is implemented yet
 *
 * Actual database connection and CRUD logic
 * will be implemented in later weeks.
 */

class DBConnection {
public:
    /**
     * @brief Constructs a DBConnection object
     */
    DBConnection();

    /**
     * @brief Destroys the DBConnection object
     */
    ~DBConnection();

    /**
     * @brief Establishes a database connection
     *
     * This function is a placeholder for Week 3.
     * It will later handle environment variables
     * and PostgreSQL connection logic.
     */
    void connect();
};

#endif // DB_CONNECTION_H

/**
 * Week 4 Note:
 * This interface is kept minimal on purpose.
 * Detailed error handling and actual DB logic
 * will be implemented in upcoming weeks.
 */
