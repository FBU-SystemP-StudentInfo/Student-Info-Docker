# Contributing Guide (Week 4)
Thank you for contributing to this project.
Week 4 focuses on **testing, stabilization, documentation, CI/CD reliability, Docker Hub final images, and presentation/demo preparation**.
Avoid adding large new features unless explicitly required.

## 1. Branching Strategy
- Base branch: `develop`
- Feature branches must be created from `develop` using this naming format:

Examples:
feature/week4-docs-readme-final
feature/week4-update-contributing-guide

Do NOT commit directly to `main`.

## 2. Creating a Feature Branch
```bash
git checkout develop
git pull
git checkout -b feature/week4-docs-readme-final

## 3. Commits

Commit messages must be clear, meaningful, and focused (small scope).

Recommended prefixes:
-fix: bug fix / stability improvement
-docs: documentation updates (README, Wiki, MANUAL, INSTALL)
-chore: maintenance, cleanup, formatting, configuration
-ci: GitHub Actions / workflow changes
-test: add/update tests or test reports
-feat: only if a small necessary feature is required in Week 4

Examples:
-docs: finalize README with Docker Hub links
-fix: handle DB connection retries on startup
-ci: fix build workflow and cache dependencies
-test: add CRUD smoke test steps to documentation
-chore: clean up Docker compose env defaults

## 4. Pull Requests

All changes must be submitted via Pull Requests to the `develop` branch.

Rules:
-At least one review is required before merging
-PR must be linked to an Issue (e.g., "Closes #12")

Examples:
Week 4: Finalize README and documentation

Merge Requirements (Week 4)
-Before merging, the PR must satisfy:
-GitHub Actions checks passed
-docker-compose up works without errors
-CRUD functionality verified (create/list/update/delete)
-Documentation updated if behavior changed
-No sensitive information committed (credentials, tokens)

## 5. Testing & Verification (Week 4 Mandatory)

Every Week 4 PR should include verification steps in the PR description.

-Minimum verification checklist:
-docker-compose up starts both containers
-App can connect to PostgreSQL using env variables
-CRUD flows run successfully
-Logs are readable and errors are handled properly

Test Results Documentation
-Add a brief test summary to GitHub Wiki or README:
-what you tested
-commands used
-expected/actual result
-screenshots/terminal logs if helpful

## 6. Environment Variables

Database credentials must be provided using environment variables:

- `DB_HOST`
- `DB_PORT`
- `DB_NAME`
- `DB_USER`
- `DB_PASSWORD`

Do not commit sensitive information to the repository.


## 7.Docker Hub & Release (Week 4 Mandatory)

Week 4 requires final Docker images to be pushed to Docker Hub and publicly accessible.
-Images must be tagged with:
-latest
-v1.0 (final release)

README.md must include Docker Hub links for:
-PostgreSQL image
-Application image

## 8. Project Board Workflow

All issues must be tracked on the project board and moved through the following stages:

- To do
- In progress
- Review
- Done

