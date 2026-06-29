## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-06-25 - Robust Input Validation with Helpful Error Messages
**Learning:** Crashing or entering an infinite loop when a user enters a non-numeric character is a poor CLI experience.
**Action:** When capturing numeric input in C++, combine `fgets` with `sscanf` for robustness. Always handle EOF gracefully and provide a clear, color-coded error message prompting the user to try again upon invalid input.
