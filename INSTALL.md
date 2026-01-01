# Installation Guide

This document explains how to set up and run the Student Information System
using Docker and Docker Compose.

---

## Requirements

Make sure the following tools are installed on your system:

- Ubuntu 20.04 or later
- Docker
- Docker Compose

You can verify the installation by running:
docker --version
docker compose version

## Setup and Run
git clone https://github.com/FBU-SystemP-StudentInfo/Student-Info-Docker.git
cd Student-Info-Docker

Build and start all services using Docker Compose:
docker compose up --build

This will start:
PostgreSQL database container
C++ application container

## Verify Running Containers

Check that containers are running:
docker ps

You should see:
student-db (PostgreSQL)
student-app (C++ application)


## Test Database Connection (Basic Check)

To view application logs:
docker compose logs app

Successful database connection messages indicate the system is running correctly.

## Stop and Clean Up

To stop containers:
docker compose down

To remove volumes (optional):
docker compose down -v

