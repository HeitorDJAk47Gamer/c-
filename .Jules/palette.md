## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI inputs can lead to poor UX when users enter invalid characters, causing infinite loops or abrupt exits without clear feedback. Replacing it with `fgets` and `sscanf` allows the application to catch invalid input, provide helpful colored error messages, and prompt the user to try again, significantly improving usability.
**Action:** Always prefer `fgets` combined with `sscanf` over `scanf` for CLI input validation to ensure applications fail gracefully, provide clear error messages, and allow users to correct mistakes.
