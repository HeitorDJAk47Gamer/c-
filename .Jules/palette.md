## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Provide Explicit Feedback on CLI Input Errors
**Learning:** Silent failures in CLI applications (like exiting without a message on `scanf` failure) are extremely frustrating and offer poor UX. Providing explicit, styled error messages (e.g., in red text) explaining what went wrong (e.g., "invalid input, please enter a number") significantly improves accessibility and user understanding, helping them correct their mistakes instead of wondering why the app crashed.
**Action:** Always provide explicit, color-coded error messages when CLI inputs fail validation or parsing, instead of silently returning an error code.
