## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-10-24 - Robust CLI Input with fgets and sscanf
**Learning:** Using `scanf` directly for user input in CLI applications can lead to brittle UX, causing crashes or infinite loops on invalid input. Validating input via `fgets` and `sscanf` provides a more robust and pleasant user experience.
**Action:** Always prefer `fgets` combined with `sscanf` over `scanf` for parsing user input in C++ CLI apps to ensure graceful error handling and prevent infinite loops.
