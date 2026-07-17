## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-28 - Robust CLI Input Validation
**Learning:** Using `scanf` directly can lead to poor user experience, either silently failing or causing infinite loops on invalid input. Wrapping input collection in a loop using `fgets` and `sscanf` allows for clear error messages, reprompting, and graceful EOF handling, making the CLI feel much more robust and user-friendly.
**Action:** Always prefer `fgets` combined with `sscanf` over `scanf` for CLI input to provide actionable error feedback and prevent application crashes.
