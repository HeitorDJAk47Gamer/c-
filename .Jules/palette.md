## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust Input Validation in C++ CLI apps
**Learning:** Using `scanf` directly for user input in C++ CLI apps can easily lead to infinite loops or crashes if the user provides unexpected characters (like letters instead of numbers) because `scanf` fails to consume the invalid characters from the buffer. It also fails silently on unexpected End-Of-File (EOF).
**Action:** Always prefer `fgets` combined with `sscanf` for CLI input to capture the full line and parse it safely, ensuring invalid input can be gracefully caught and re-prompted without leaving the buffer in an invalid state. Explicitly check for `NULL` on `fgets` to gracefully handle EOF.
