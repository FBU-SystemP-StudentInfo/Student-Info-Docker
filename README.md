# Student-Info-Docker

Student-Info-Docker is a containerized Student Information System developed as part of the **System Programming** course.

The project is implemented in **C++** and runs in **Docker containers** using a **PostgreSQL** database.  
As of **Week 3**, the system includes database connectivity and basic CRUD operations.

---

## Project Objectives

- Develop a containerized C++ application using Docker
- Integrate a PostgreSQL database with the C++ application
- Implement basic CRUD operations
- Practice Git, GitHub workflow, and team-based development
- Gain experience with Docker Compose and basic DevOps concepts

---

## System Architecture

The system consists of the following components:

- **Application Container**  
  C++ backend application responsible for business logic and database operations

- **Database Container**  
  PostgreSQL database for storing student information

- **Container Orchestration**  
  Docker Compose is used to manage multi-container setup and networking

- **Version Control & Collaboration**  
  GitHub is used for source control, issue tracking, and pull requests

---

## Docker Images

### PostgreSQL Database
- Docker Hub: https://hub.docker.com/r/sudeulufer/student-postgres
- Image tag:
docker pull sudeulufer/student-postgres:week3
  
### C++ Application

- Docker Hub: https://hub.docker.com/r/sudeulufer/student-cpp-app
- Image tag:
docker pull sudeulufer/student-cpp-app:week3

## Week 3 Status

PostgreSQL database connected to C++ application
Database connection implemented using environment variables
Basic CRUD operations implemented
Error handling and input validation added
Multi-container setup managed via Docker Compose
Updated documentation (README, MANUAL, CONTRIBUTING)

## Technologies Used
C++
PostgreSQL
Docker
Docker Compose
Git & GitHub
Ubuntu

## Project Structure

The project consists of multiple components including a C++ application and a PostgreSQL database running in Docker containers.
The repository follows a structured layout to separate application logic, configuration, and documentation:

## Team Members and Roles

Student 1 – Project Manager
Repository management
Branch strategy and code reviews
Documentation and weekly reports

Student 2 – Docker & DevOps Engineer
Dockerfiles and Docker Compose
CI/CD pipeline
Docker Hub image management

Student 3 – C++ Developer
C++ application development
Database connection and CRUD operations
Testing and validation

## Development Workflow
main branch contains stable releases
develop branch is used for active development
All changes are made through feature branches
Pull Requests are required for merging
Direct pushes to main and develop are prohibited


## How to Run
1. Clone the Repository
git clone https://github.com/FBU-SystemP-StudentInfo/Student-Info-Docker.git
cd Student-Info-Docker

2. Configure Environment Variables
The application uses the following database environment variables:
DB_HOST
DB_PORT
DB_NAME
DB_USER
DB_PASSWORD

These variables are defined in the docker-compose.yml file.

3. Run with Docker Compose
docker compose up --build

## Database Environment Variables
The C++ application reads database connection settings from environment variables and does not hardcode credentials.

## License
This project is licensed under the MIT License


