# Student-Info-Docker

Student Information System (C++ · Docker · PostgreSQL)
---

## Project Overview


Student-Info-Docker is a containerized Student Information System developed as part of the System Programming course.

The project is implemented in C++, runs inside Docker containers, and uses a PostgreSQL database.
The system provides basic CRUD (Create, Read, Update, Delete) operations for managing student information and is deployed using Docker Compose.


---

## Project Objectives

-Develop a containerized C++ application using Docker
-Integrate a PostgreSQL database with the C++ application
-Implement basic CRUD operations
-Practice Git, GitHub workflow, and team-based development
-Gain experience with Docker Compose and basic DevOps concepts

---

## System Architecture

The system consists of the following components:

- **Application Container**  
  C++ backend application
  Handles business logic and database operations

- **Database Container**  
  PostgreSQL database
  Stores student information

- **Container Orchestration**  
  Docker Compose is used to manage multi-container setup and networking

- **Version Control & Collaboration**  
  GitHub is used for source control, issue tracking, and pull requests

---

## Docker Images (Week 3 reference)



- Docker Hub: https://hub.docker.com/r/sudeulufer/student-postgres
- Image tag:
docker pull sudeulufer/student-postgres:week3
  
### C++ Application

- Docker Hub: https://hub.docker.com/r/sudeulufer/student-cpp-app
- Image tag:
docker pull sudeulufer/student-cpp-app:week3

---

## How to Run the System

Clone the Repository
git clone https://github.com/FBU-SystemP-StudentInfo/Student-Info-Docker.git
cd Student-Info-Docker

Run with Docker Compose
docker compose up --build

This command will:
-Build the C++ application image
-Start the PostgreSQL database container
-Start the application container
-Create required Docker networks and volumes

---

## Environment Variables

The application uses the following database environment variables:
DB_HOST
DB_PORT
DB_NAME
DB_USER
DB_PASSWORD

These variables are defined in the docker-compose.yml file.
No manual configuration is required for default usage.

---

## Verification & Testing

To verify that the system is running correctly:
docker ps

Check application logs:
docker compose logs app

Successful database connection and startup messages indicate that the system is working as expected.

---

## Project Structure

The project is organized using a clear and structured repository layout to separate 
application logic, Docker configuration, and project documentation. This separation 
helps improve code readability, maintainability, and team collaboration.

The C++ source code and header files are grouped to encapsulate the core application 
logic, while Docker-related configuration files are maintained separately to manage 
containerization and service orchestration. Project documentation files, including 
installation guides, user manuals, and contribution guidelines, are kept at the root 
level of the repository for easy access.

This structured approach ensures that development, deployment, and documentation 
processes remain modular and easy to manage throughout the project lifecycle.


---

## Team Members and Roles

Student 1 – Project Manager
Repository management, branch strategy, code reviews, documentation, weekly reports

Student 2 – Docker & DevOps Engineer
Dockerfiles, Docker Compose, CI/CD pipeline, Docker Hub image management

Student 3 – C++ Developer
C++ application development, database connection, CRUD operations, testing and validation

---

## Development Workflow
main branch contains stable releases
develop branch is used for active development
All changes are made through feature branches
Pull Requests are required for merging
Direct pushes to main and develop branches are prohibited

---


## Documentation

INSTALL.md – Installation and setup instructions
MANUAL.md – User manual and application usage
CONTRIBUTING.md – Contribution guidelines and development rules

---

## License
This project is licensed under the MIT License

---

## README Complete
The Student Information System is fully containerized, documented, and ready to run using Docker and Docker Compose.

