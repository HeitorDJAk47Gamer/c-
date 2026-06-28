## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI input in C++ applications can lead to infinite loops or abrupt crashes when users input invalid characters instead of numbers.
**Action:** Always prefer using `fgets` combined with `sscanf` for reading user input in CLI applications. This allows handling invalid inputs gracefully by displaying a colored warning message (e.g., using ANSI yellow `\033[1;33m`) and reprompting the user without crashing the application, significantly improving the UX. Also ensure EOF handling with a distinct error message in red.
