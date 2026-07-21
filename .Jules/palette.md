## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-10-25 - Robust CLI Input Validation
**Learning:** Using scanf directly for CLI inputs can lead to silent failures, crashes, or infinite loops when users provide unexpected characters. A robust UX handles invalid input gracefully by providing clear feedback and asking again.
**Action:** Prefer fgets combined with sscanf for user input, looping until valid input is received and handling EOF gracefully.
