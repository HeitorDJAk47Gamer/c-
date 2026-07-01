## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-24 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for user input in CLI apps can lead to frustrating infinite loops or ungraceful exits when users type invalid characters. Robust CLI UX requires capturing the whole line with `fgets` and parsing it safely, allowing the program to provide helpful error messages and a chance to retry.
**Action:** Always prefer `fgets` combined with `sscanf` over raw `scanf` in C/C++ CLI applications to ensure graceful error handling and clear reprompts for invalid inputs.