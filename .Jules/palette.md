## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-10-25 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI input can lead to poor UX when users enter invalid characters, causing silent exits or infinite loops. Validating input by reading full lines with `fgets` and parsing with `sscanf` provides the opportunity to give clear error messages and ask for input again, making the application much more forgiving and robust.
**Action:** Always prefer `fgets` + `sscanf` for CLI user input, handling EOF gracefully, and provide clear, color-coded feedback when prompting the user to try again.
