# Installation Guide

This document explains how to set up, build, and run the Student Information System using Docker and Docker Compose on Ubuntu.

---

## System Requirements

Ubuntu 20.04 LTS or later
Docker (version 20.10 or later)
Docker Compose (Docker Compose v2 recommended)
Git

Verify installations

Run the following commands:
docker --version
docker compose version
git --version


If all commands return version information, your environment is ready.

## Clone the Repository

Clone the project repository from GitHub:
git clone https://github.com/FBU-SystemP-StudentInfo/Student-Info-Docker.git
cd Student-Info-Docker

## Environment Configuration

The application and database are configured using environment variables defined in docker-compose.yml.

Default configuration includes:

PostgreSQL database
C++ application container
Internal Docker network for container communication
No manual .env file configuration is required for basic usage.

## Build and Run the System

Build and start all services using Docker Compose:

docker compose up --build

This command will:
Build the C++ application image
Start the PostgreSQL database container
Start the C++ application container
Create required Docker networks and volumes

The first build may take a few minutes.

## Verify Running Containers
In a new terminal window, check running containers:

docker ps

You should see at least the following containers:
student-db – PostgreSQL database
student-app – C++ application

## Verify Database Connection (Basic Test)

To check whether the application successfully connects to the database, view application logs:

docker compose logs app


A successful startup will include log messages indicating:
Database connection established
Application started successfully
This confirms that the system is running correctly.

## Common Troubleshooting
Containers not starting

Ensure Docker is running:
sudo systemctl status docker

Check logs:
docker compose logs

Port or volume conflicts
Stop all containers and remove volumes:
docker compose down -v

Then rebuild:
docker compose up --build

## Stop and Clean Up

To stop running containers:
docker compose down

To stop containers and remove volumes (optional):
docker compose down -v

## Next Steps

-Refer to MANUAL.md for application usage and CRUD operations
-Refer to README.md for system architecture and Docker Hub links
-Refer to CONTRIBUTING.md for contribution and development guidelines

---

### Installation Complete

The Student Information System is now successfully installed and running using Docker and Docker Compose.



