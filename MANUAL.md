# User Manual

## 1. Project Overview
This project is a containerized C++ Student Information System developed as part of the System Programming course.
The application provides basic CRUD operations and communicates with a PostgreSQL database using Docker containers.

## 2. System Requirements
- Docker
- Docker Compose
- Git
- Internet connection (for pulling Docker images)

## 3. Application Architecture
The system consists of two main services:
- **C++ Application Service**: Handles business logic and database operations
- **PostgreSQL Service**: Stores student data

The services communicate over a Docker bridge network defined in `docker-compose.yml`.

## 4. Environment Variables
The following environment variables are required for database connectivity:

- `DB_HOST`
- `DB_PORT`
- `DB_NAME`
- `DB_USER`
- `DB_PASSWORD`

These variables are configured in the `docker-compose.yml` file.

## 5. Running the Application

### Step 1: Clone the Repository
```bash
git clone https://github.com/FBU-SystemP-StudentInfo/Student-Info-Docker.git
cd Student-Info-Docker
