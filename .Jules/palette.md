## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Provide Explicit Error Feedback for CLI Inputs
**Learning:** Silently failing on invalid input leads to user confusion. When users make a mistake (like typing text instead of a number), providing explicit, immediate, and color-coded error messages dramatically improves the usability of the application, guiding the user to correct their input without frustration.
**Action:** Always validate user input in CLI applications and provide clear, actionable error messages (using colors where applicable) rather than exiting silently.
