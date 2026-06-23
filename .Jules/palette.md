## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2026-06-23 - Robust CLI Input Validation
**Learning:** Using basic input methods like `scanf` in CLI applications often leads to poor UX, such as infinite loops when users input letters instead of numbers. Transitioning to more robust string reading and parsing methods like `fgets` and `sscanf`, while properly looping to allow users to retry their input on error, prevents the application from breaking abruptly or behaving ungracefully.
**Action:** When building CLI prompts, use safe input reading mechanisms and provide clear, actionable error feedback allowing the user to correct their input without crashing the program. Always handle EOF gracefully to avoid silent failures or infinite loops.
