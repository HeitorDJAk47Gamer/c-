## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-24 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for user input in CLI apps can lead to frustrating infinite loops and crashes when users enter unexpected characters (like letters instead of numbers).
**Action:** Always prefer combining `fgets` for reading the whole line safely with `sscanf` for parsing. This ensures invalid input can be caught, cleared, and presented with a clear, colored error message allowing the user to try again, significantly improving the app's robustness and UX.
