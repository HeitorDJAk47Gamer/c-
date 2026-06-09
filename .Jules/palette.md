## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-06-09 - Avoid Silent Failures in CLI Inputs
**Learning:** Silent failures (e.g., exiting immediately when input parsing fails) are frustrating and confusing for users. Providing immediate, actionable feedback using semantic colors (like red for errors) dramatically improves the UX, helping users understand exactly what went wrong and how to fix it.
**Action:** Always provide clear, colored error messages when input validation fails in CLI applications, rather than silently terminating the program.
