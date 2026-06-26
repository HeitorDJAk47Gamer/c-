## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** CLI applications that crash or enter infinite loops upon receiving invalid input create a very frustrating UX. Utilizing `fgets` and `sscanf` instead of `scanf` provides a robust way to handle unexpected characters and EOF gracefully, allowing for clear, actionable error messages and a chance for the user to correct their input without restarting the app.
**Action:** When building C++ CLI tools, avoid `scanf` for user input. Prefer `fgets` combined with `sscanf` to ensure the application remains stable and provides helpful feedback upon receiving invalid data. Always handle the EOF condition to prevent loops.
