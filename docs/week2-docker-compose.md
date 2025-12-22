# Week 2 – Docker Compose & PostgreSQL Setup

## Docker Compose Overview
This setup uses Docker Compose to orchestrate multiple containers.

## Services

### PostgreSQL (db)
- Image: postgres:16
- Database: studentdb
- User: student
- Persistent volume used for data storage.

### Application (app)
- Image: alpine
- Used as a placeholder application.
- Depends on PostgreSQL service.

## Networking
- Docker Compose creates a default bridge network.
- Services communicate using service names.

## Volumes
- pgdata volume is used to persist PostgreSQL data.

## Status
Containers successfully start using:
