## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2025-02-12 - Improve CLI Input Validation
**Learning:** Using `scanf` directly for float inputs in CLI applications can lead to infinite loops or abrupt failures when users input invalid characters (like letters). This creates a frustrating and inaccessible experience where the app appears to freeze or crash without explanation.
**Action:** Always prefer reading entire lines with `fgets` and parsing them with `sscanf`. This allows for robust error handling, providing clear, colored error messages and letting the user retry without breaking the application flow. It also properly handles EOF situations.
