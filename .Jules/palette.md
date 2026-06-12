## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-10-27 - Robust CLI Input Handling
**Learning:** Using `scanf` directly for user input in CLI apps creates a poor UX, as invalid characters can easily crash the app or cause infinite loops. A combination of `fgets` and `sscanf` allows for robust validation and the ability to gracefully retry, presenting clear, colorful error messages to guide the user back on track.
**Action:** Prefer `fgets` combined with `sscanf` for all numerical user input in C/C++ CLI tools to ensure stability and provide helpful, localized error feedback when invalid data is entered.
