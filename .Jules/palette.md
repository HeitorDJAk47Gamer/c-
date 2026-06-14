## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Resilient CLI Input Validation
**Learning:** Using `scanf` directly for CLI input in C/C++ can lead to infinite loops on invalid input because it leaves the invalid character in the input buffer. Silent crashes or infinite loops are terrible UX.
**Action:** Always prefer a combination of `fgets` and `sscanf` for CLI input to consume the entire line and ensure predictable, graceful error recovery, providing clear and actionable feedback on invalid entries.
