# Contributing Guide (Week 3)

Thank you for contributing to this project. This guide defines the workflow and standards for Week 3 (C++ application development + PostgreSQL integration).

## 1. Branching Strategy
- Base branch: `develop`
- Feature branches must be created from `develop` using this naming format:

Examples:
- `feature/week3-db-connection`
- `feature/week3-manual-docs`
- `feature/week3-contributing-docs`

Do NOT commit directly to `main`.

## 2. Creating a Feature Branch
```bash
git checkout develop
git pull
git checkout -b feature/week3-contributing-docs

## 3. Commits

Commit messages must be clear and meaningful.

Recommended prefixes:
- `feat:` new feature
- `fix:` bug fix
- `docs:` documentation changes
- `chore:` maintenance or configuration updates

Examples:
- `feat: add database connection module`
- `docs: add MANUAL.md user guide`
- `fix: handle missing DB environment variables`

Commits should be small and focused.

## 4. Pull Requests

All changes must be submitted via Pull Requests to the `develop` branch.

Rules:
- At least one review is required before merging
- PRs must be linked to an issue
- PR titles must start with `Week 3:`

Examples:
- `Week 3: Add database connection`
- `Week 3: Add CONTRIBUTING.md documentation`

## 5. Code Structure (C++)

- Header files must be placed under `include/`
- Source files must be placed under `src/`
- Avoid hardcoding credentials
- Use environment variables for configuration

## 6. Environment Variables

Database credentials must be provided using environment variables:

- `DB_HOST`
- `DB_PORT`
- `DB_NAME`
- `DB_USER`
- `DB_PASSWORD`

Do not commit sensitive information to the repository.

## 7. Project Board Workflow

All issues must be tracked on the project board and moved through the following stages:

- To do
- In progress
- Review
- Done

