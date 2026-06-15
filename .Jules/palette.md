## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Graceful Error Handling with fgets
**Learning:** Using `scanf` directly can result in infinite loops or program crashes when users enter unexpected characters. Utilizing `fgets` combined with `sscanf` allows for robust user input validation and the ability to exit gracefully on EOF, preventing these issues and improving overall CLI usability.
**Action:** Always prefer `fgets` over `scanf` for CLI apps to handle invalid user input scenarios gracefully.
