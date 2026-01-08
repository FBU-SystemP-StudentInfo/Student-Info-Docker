# Student-Info-Docker

Student-Info-Docker is a containerized Student Information System developed as part of the **System Programming** course.

The project is implemented in **C++** and runs in **Docker containers** using a **PostgreSQL** database.  
As of **Week 4**, the system includes database connectivity, basic CRUD operations, and verified Docker-based deployment using **Docker Compose**.

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

## Docker Images (Week 3 reference)

### PostgreSQL Database
- Docker Hub: https://hub.docker.com/r/sudeulufer/student-postgres  
- Example tag (Week 3):
  ```bash
  docker pull sudeulufer/student-postgres:week3

