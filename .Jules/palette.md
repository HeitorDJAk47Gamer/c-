## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-24 - Robust CLI Input Validation UX
**Learning:** Using `scanf` in C/C++ CLI tools for numeric input results in poor UX because non-numeric input can cause infinite loops or abrupt crashes. Providing an explicit retry mechanism with helpful error messaging keeps the user in control and avoids frustration.
**Action:** For C/C++ CLI applications, always prefer using `fgets` combined with `sscanf` for robust user input validation to handle invalid characters gracefully, and properly handle EOF.
