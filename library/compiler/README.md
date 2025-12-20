# Cyclone Compiler Internals

This directory contains the source code for the Cyclone compiler. The compiler is written in Cyclone itself (it is self-hosting).

## Architecture

The compiler operates as a source-to-source translator, converting Cyclone source files (`.cyc`) into C source files (`.c`).

### Key Phases

1.  **Parsing (`parse.cyy`, `lex.cyl`)**:
    *   The grammar is defined in `parse.cyy` (Bison).
    *   The lexer is defined in `lex.cyl`.
    *   Produces an Abstract Syntax Tree (AST) defined in `absyn.h`.

2.  **Type Checking (`tc*.cyc`)**:
    *   The type checker is split across multiple files (`tc.cyc`, `tcdecl.cyc`, `tcstmt.cyc`, etc.).
    *   It enforces Cyclone's safety guarantees (memory safety, thread safety).
    *   Integrates with the **Banshee** constraint solver for flow-sensitive analysis.

3.  **Lowering / Transformation**:
    *   `lower.cyc`: Performs high-level transformations.
    *   `remove_aggregates.cyc`: Simplifies aggregate data structures.
    *   The AST is often modified **in-place** by these passes.

4.  **Code Generation (`toc.cyc`)**:
    *   Translates the Cyclone AST into a C AST.
    *   Uses a global state approach (see `globals` in `toc.cyc`) which is a known area for improvement.
    *   Emits C code, often using GCC-specific extensions (e.g., statement expressions).

## Key Files

*   **`absyn.h`**: Defines the core Abstract Syntax Tree (AST) nodes. This is the common data structure used by all passes.
*   **`cyclone.cyc`**: The main entry point for the compiler (driver).
*   **`tc.cyc`**: The main driver for the type-checking phase.
*   **`toc.cyc`**: The "Translation to C" pass.

## Known Issues & Improvements

*   **Global State**: `toc.cyc` heavily relies on global variables, making it non-reentrant. Refactoring this to use a context struct is a desired improvement.
*   **Mutable AST**: The in-place modification of the AST can make debugging difficult.
*   **GCC Dependencies**: The generated C code often relies on GCC extensions, limiting portability to other C compilers.
