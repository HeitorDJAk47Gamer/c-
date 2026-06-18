## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.
## 2024-05-18 - Resilient CLI Input Handling
**Learning:** Abrupt program exits on invalid input create a jarring, punitive user experience in CLI tools. Using functions like `fgets` and `sscanf` over raw `scanf` allows the program to recover gracefully and provide descriptive, visually distinct error messages (e.g., using ANSI red). This approach turns user errors into simple corrections rather than complete workflow interruptions.
**Action:** Always implement robust input validation loops that catch bad data, present clear error messaging in the appropriate language (e.g., Portuguese), and reprompt the user instead of letting the application crash or exit unexpectedly.
