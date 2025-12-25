# Student-Info-Docker

Student-Info-Docker is a Student Information System developed as part of the **System Programming** course.  
The project is implemented in **C++** and runs on **Docker containers** using a **PostgreSQL** database.

The system provides basic **CRUD operations** to manage student information in a containerized environment.

---

## Project Objectives

- Develop a containerized C++ application using Docker
- Implement a PostgreSQL-based student information system
- Practice Git, GitHub workflow, and team-based development
- Gain experience with CI/CD and container orchestration

---

## System Architecture

The system consists of the following components:

- **Database Container**: PostgreSQL database to store student information
- **Application Container**: C++ application responsible for CRUD operations
- **Version Control**: GitHub for collaboration and project management
- **Containerization**: Docker and Docker Compose

> Detailed architecture diagrams and implementation details will be added in later weeks.
## Docker Images (Week 2)

### PostgreSQL Database
Docker Hub:
https://hub.docker.com/r/sudeulufer/student-postgres

Pull:
docker pull sudeulufer/student-postgres:week2

### C++ Application
Docker Hub:
https://hub.docker.com/r/sudeulufer/student-cpp-app

Pull:
docker pull sudeulufer/student-cpp-app:week2

---

## Technologies Used

- C++
- PostgreSQL
- Docker
- Docker Compose
- Git & GitHub
- Ubuntu

---

## Project Structure
The project consists of multiple components including a C++ application and a PostgreSQL database running in Docker containers.


---

## Team Members and Roles

- **Student 1 – Project Manager**
  - Repository management
  - Branch strategy and code reviews
  - Documentation and weekly reports

- **Student 2 – Docker & DevOps Engineer**
  - Dockerfiles and Docker Compose
  - CI/CD pipeline
  - Docker Hub image management

- **Student 3 – C++ Developer**
  - C++ application development
  - Database connection and CRUD operations
  - Testing and validation

## Development Workflow

- `main` branch contains stable releases
- `develop` branch is used for active development
- All changes are made through feature branches
- Pull Requests are required for merging
- Direct pushes to `main` and `develop` are prohibited
- 
## How to Run

Instructions for building and running the project using Docker
will be provided in later weeks.

Planned steps:
1. Clone the repository
2. Configure environment variables
3. Run Docker Compose

## License

This project is licensed under the MIT License.

## C++ (Develop)
C++ development happens on the `develop` branch via PRs.

## Database Environment Variables

The application uses the following environment variables for database configuration
when running inside Docker:

- DB_HOST
- DB_PORT
- DB_NAME
- DB_USER
- DB_PASSWORD

These variables are defined in the docker-compose.yml file and no credentials
are hardcoded in the application.

## Docker DB Environment Variables (Week 2)

The app reads DB connection settings from environment variables:
DB_HOST, DB_PORT, DB_NAME, DB_USER, DB_PASSWORD.


