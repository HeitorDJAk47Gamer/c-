## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-07-07 - Robust CLI Input Validation
**Learning:** Using scanf for CLI inputs can lead to infinite loops or crashes when users enter invalid characters (like letters instead of numbers), which severely degrades the user experience.
**Action:** Always prefer fgets combined with sscanf for reading CLI input to ensure robust validation and the ability to provide helpful, actionable error messages without crashing the app.
