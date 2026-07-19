## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI input leads to poor UX, as invalid input can crash the program or cause infinite loops. Using `fgets` and `sscanf` with a retry loop provides clear feedback and a much more resilient, user-friendly experience.
**Action:** Always prefer `fgets` and `sscanf` over `scanf` for CLI apps to gracefully handle invalid input, give actionable error messages, and handle EOF safely.
