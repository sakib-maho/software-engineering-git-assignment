# Software Engineering Git Assignment (Upgraded)

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

## Usage

```bash
make build
./stats_cli 12 4 99 23 18
```

## Test

```bash
make test
```

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

## License

MIT License. See `LICENSE`.
