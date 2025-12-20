# Cyclone Language Compiler

Cyclone is a safe dialect of C. It is designed to prevent buffer overflows, format string attacks, and memory management errors that are common in C programs, while retaining C's syntax and low-level control.

This repository contains the source code for the Cyclone compiler, a self-hosting, source-to-source compiler that translates Cyclone code into C.

## Build Instructions

The project uses [Bazel](https://bazel.build) for its build system.

To build the entire project:

```bash
bazel build //cyclone/...
```

To run the test suite:

```bash
bazel test //testsuite/...
```

## Project Structure

*   `library/`: Contains the core compiler source code and standard libraries.
    *   `library/compiler/`: The Cyclone compiler implementation (written in Cyclone).
    *   `library/banshee/`: Constraint solver used for flow analysis.
    *   `library/std/`: The Cyclone standard library.
*   `testsuite/`: Comprehensive test suite for the compiler.
*   `tools/`: various utilities.
*   `build_defs.bzl`: Custom Bazel definitions for the Cyclone build process.

## Architecture Overview

The Cyclone compiler follows a classic multi-pass architecture but utilizes a **mutable AST** design where passes often modify the Abstract Syntax Tree in place.

1.  **Parsing**: Uses `bison` (`parse.cyy`) and a custom lexer (`lex.cyl`) to produce an AST.
2.  **Semantic Analysis**: A modular type-checking system (`tc*.cyc`) traverses the AST, enforcing Cyclone's advanced type rules (regions, pointers, effects). It relies on the Banshee constraint solver.
3.  **Transformation/Lowering**: Several passes transform the AST to simplify it (e.g., `remove_aggregates.cyc`, `lower.cyc`).
4.  **Code Generation**: The `toc.cyc` pass translates the Cyclone AST into a C AST, which is then emitted as C code.

## Contributing

See the `library/compiler` directory for more details on the compiler internals.