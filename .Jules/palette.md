## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-24 - explicit error messages
**Learning:** Silent failures in CLI applications result in poor UX as users don't know why a program abruptly stopped or returned no output.
**Action:** Always provide explicit error messages with clear, human-readable explanations before exiting on failure. Use color styling, such as red text (`\033[1;31m`), to draw attention to error states.
