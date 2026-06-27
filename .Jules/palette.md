## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2026-06-27 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for user input in C/C++ CLI applications can easily lead to infinite loops or crashes when invalid characters are entered. Robust error handling and validating inputs prevents these poor UX scenarios.
**Action:** Prefer using `fgets` combined with `sscanf` for input validation in CLI tools, explicitly handling EOF conditions and providing clear, actionable error messages (e.g. invalid input).
