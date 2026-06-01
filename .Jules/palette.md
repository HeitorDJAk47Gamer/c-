## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-24 - Provide Context and Explicit Error Feedback in CLI Tools
**Learning:** Silent failures in CLI applications (like exiting without an error message upon invalid user input) create a confusing and frustrating user experience. Providing explicit, actionable error messages and context (e.g., displaying the passing threshold alongside the final result) drastically reduces ambiguity and helps the user understand the system's behavior and their outcomes.
**Action:** Always validate user input in CLI tools and provide clear, descriptive error messages upon failure instead of silently exiting. Contextualize results (like thresholds) to clarify the outcome to the user.