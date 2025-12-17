# Student-Info-Docker
Student-Info-Docker is a Student Information System developed as part of the
System Programming course. The project is implemented in C++ and runs on
Docker containers using a PostgreSQL database.

The system allows basic CRUD operations for managing student information
in a containerized and distributed environment.

## Project Objectives
- Develop a containerized C++ application using Docker
- Implement a PostgreSQL-based student information system
- Practice Git, GitHub workflow, and team-based development
- Gain experience with CI/CD and container orchestration

## System Architecture

The system consists of the following components:
- **Database Container**: PostgreSQL database to store student information
- **Application Container**: C++ application responsible for CRUD operations
- **Version Control**: GitHub for collaboration and project management
- **Containerization**: Docker and Docker Compose
Detailed architecture and diagrams will be added in later weeks.

## Technologies Used
- C++
- PostgreSQL
- Docker
- Docker Compose
- Git & GitHub
- Ubuntu

## Project Structure

```text
Student-Info-Docker/
│
├── src/                # C++ source files
├── include/            # Header files
├── tests/              # Unit and integration tests
├── docker/             # Docker-related files
├── .github/            # GitHub workflows and templates
├── README.md
└── docker-compose.yml

---
## 🔹 7. Team Members and Roles 
```md
## Team Members

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

## How to Run
Instructions for building and running the project using Docker
will be provided in later weeks.
Planned steps:
1. Clone the repository
2. Configure environment variables
3. Run Docker Compose

## License
This project is licensed under the MIT License.






