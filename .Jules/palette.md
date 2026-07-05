## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2026-07-05 - Robust CLI Input Validation
**Learning:** Relying on basic `scanf` for user input in CLI apps can cause terrible UX, such as infinite loops when a user accidentally inputs a string instead of a number. This lack of fault tolerance frustrates users.
**Action:** Use `fgets` combined with `sscanf` for robust CLI input handling, providing clear error messages instead of failing silently or crashing, and always handle `EOF` gracefully.
