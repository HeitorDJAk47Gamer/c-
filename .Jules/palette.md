## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI input leads to poor UX, as invalid inputs cause immediate unhelpful exits. A loop with `fgets` and `sscanf` allows for graceful error handling, giving users a clear message and a chance to try again, significantly improving usability.
**Action:** Always prefer `fgets` combined with `sscanf` for CLI input to handle errors gracefully and provide helpful, localized feedback to users.
