## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Fragile input handling (like bare `scanf`) in CLI tools leads to poor UX, causing abrupt exits or infinite loops upon typos. Providing clear, colorful error messages and allowing the user to retry improves the usability and resilience of the application.
**Action:** Always use `fgets` combined with `sscanf` for user input in C/C++ CLI apps to handle invalid inputs gracefully and provide actionable feedback.
