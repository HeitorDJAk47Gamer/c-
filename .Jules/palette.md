## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-06-25 - Prevent Silent Failures with Clear, Colored Errors
**Learning:** Silent failures in CLI applications create confusion. Users might not realize the program exited because of their input, causing frustration. Colored error feedback helps catch the eye and immediately communicates the nature of the issue.
**Action:** Always provide explicit, styled (e.g., red for errors) error messages before exiting a CLI program upon invalid input, improving accessibility and user understanding.
