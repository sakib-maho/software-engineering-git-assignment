# Software Engineering Git Assignment (Upgraded)

<!-- BrandCloud:readme-standard -->
[![Maintained](https://img.shields.io/badge/Maintained-yes-brightgreen.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Showcase](https://img.shields.io/badge/Portfolio-Showcase-blue.svg)](#)

_Part of the `sakib-maho` project showcase series with consistent documentation and quality standards._

This repository is transformed into a practical C statistics CLI that demonstrates
clean source organization, reusable functions, and basic test automation with `make`.

## Features

- CLI accepts integer values and computes:
  - minimum
  - maximum
  - mean
- Reusable statistics library (`stats.c`)
- Unit-style test executable (`tests/test_stats.c`)
- Build/test automation via `Makefile`

## Quick Start

```bash
make build
./stats_cli 12 4 99 23 18
```

## Tests

```bash
make test
```

## License

MIT License. See `LICENSE`.

## Project Structure

```text
software-engineering-git-assignment/
├── include/stats.h
├── src/
│   ├── main.c
│   └── stats.c
├── tests/test_stats.c
└── Makefile
```
