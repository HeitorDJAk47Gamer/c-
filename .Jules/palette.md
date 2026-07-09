## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI input can lead to poor UX when users enter invalid characters, causing immediate exits or infinite loops. Graceful error handling with retry prompts significantly improves the user experience.
**Action:** Always prefer using `fgets` combined with `sscanf` for reading user input in C/C++ CLI applications, providing clear error messages and the ability to re-enter data.
