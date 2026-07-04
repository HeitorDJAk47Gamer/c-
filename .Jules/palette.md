## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for user input in CLI applications can lead to infinite loops or crashes if the user provides unexpected input types (e.g., typing letters instead of numbers). This is a frustrating UX.
**Action:** Always prefer reading entire lines with `fgets` and then parsing the buffer with `sscanf` for more robust input validation, ensuring clear error messages and a smooth recovery process.
