# User Manual
Student Information System

## 1. Project Overview
The Student Information System is a containerized C++ application developed as part of the System Programming course.
The system provides basic CRUD (Create, Read, Update, Delete) operations for managing student information and uses a PostgreSQL database running inside Docker containers.
The application is deployed and managed using Docker and Docker Compose.

## 2. System Requirements
To use the application, the following tools must be installed:
-Docker
-Docker Compose
-Git
-Internet connection (for pulling Docker images)

Installation steps are explained in detail in INSTALL.md.

## 3. Application Architecture
The system consists of two main services:

3.1 C++ Application Service
-Handles business logic
-Performs CRUD operations
-Connects to the PostgreSQL database
-Runs inside a Docker container

3.2 PostgreSQL Database Service
-Stores student information
-Runs in a separate Docker container
-Communicates with the application via Docker network

All services communicate through a Docker bridge network defined in docker-compose.yml.

## 4. Environment Variables
The application uses the following environment variables for database connectivity:

- `DB_HOST`
- `DB_PORT`
- `DB_NAME`
- `DB_USER`
- `DB_PASSWORD`

These variables are automatically configured in the docker-compose.yml file.
No manual configuration is required for default usage.

## 5. Running the Application

Step 1: Clone the Repository
git clone https://github.com/FBU-SystemP-StudentInfo/Student-Info-Docker.git
cd Student-Info-Docker


Step 2: Start the System
docker compose up --build


This command will:
Build the C++ application image
Start the PostgreSQL database container
Start the application container

## 6. Using the Application

The application runs as a command-line based system.

6.1 Add a Student
Enter student ID
Enter name and surname
Enter department
Enter email address

The student record is saved to the PostgreSQL database.

6.2 List Students
Displays all stored student records
Shows ID, name, surname, department, and email

6.3 Update Student Information
Select a student by ID
Update one or more fields
Changes are saved to the database

6.4 Delete a Student
Select a student by ID
The selected student record is removed from the database


## 7. Database Connection Verification

To verify database connectivity, check the application logs:
docker compose logs app

If the connection is successful, logs will indicate:
Database connection established
Application started successfully

## 8. Error Handling
The application includes basic error handling for:
-Invalid user input
-Database connection failures
-Transaction errors
Error messages are displayed in the console to guide the user.

## 9. Stopping the Application
To stop the running containers:
docker compose down

To stop containers and remove volumes (optional):
docker compose down -v

## 10. Additional Information

INSTALL.md: Installation and setup instructions
README.md: Project overview, architecture, and Docker Hub links
CONTRIBUTING.md: Contribution guidelines and development workflow

---

### User Manual Complete

The Student Information System can now be successfully used to manage student information through a Docker-based C++ application.




