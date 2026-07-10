## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-20 - Robust CLI Input Validation
**Learning:** Using scanf directly for CLI user input is brittle and can lead to infinite loops or crashes on invalid input. A robust UX strategy is to use fgets combined with sscanf, which cleanly reads the entire line and validates it, allowing for graceful retries and EOF handling.
**Action:** For C++ CLI applications, always prefer fgets and sscanf over scanf for reading user input to ensure resilience against unexpected character inputs and EOF.
