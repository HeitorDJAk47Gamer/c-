## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-20 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for user input in CLI apps can cause infinite loops or crashes when users enter unexpected characters. Replacing it with `fgets` and `sscanf` allows for robust validation and reprompting, turning a frustrating crash into a helpful guided experience.
**Action:** Always use `fgets` and `sscanf` for CLI input to handle invalid characters gracefully and provide helpful error messages.