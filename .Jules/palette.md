## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Graceful error handling for invalid input in CLI applications prevents frustrating crashes. Using `fgets` and `sscanf` instead of `scanf` allows the application to prompt the user again for correct input, creating a more forgiving and user-friendly experience.
**Action:** Use `fgets` with `sscanf` and handle EOF appropriately in C/C++ CLI tools to provide informative error messages and retry logic for invalid inputs instead of exiting.
