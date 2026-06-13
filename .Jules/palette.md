## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2026-06-13 - Robust Input Validation in C++ CLI
**Learning:** Using `scanf` in C++ CLI applications can cause crashes or infinite loops when users input invalid characters. This is a poor UX as it breaks the application instead of guiding the user.
**Action:** Prefer using `fgets` combined with `sscanf` for user input. This robust combination allows for safely reading the entire input line as a string and then validating it, preventing crashes and allowing for a helpful retry loop with error messages.
