# Docker Requirements – Student 2 (Sude)

## Services
- db: PostgreSQL
- app: C++ application (Week 2)

## Network
- User-defined bridge network

## Volumes
- pgdata for PostgreSQL persistence

## Environment Variables
POSTGRES_DB=studentdb
POSTGRES_USER=student
POSTGRES_PASSWORD=studentpass
DB_HOST=db
DB_PORT=5432
