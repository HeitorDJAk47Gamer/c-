## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Silent failures on invalid input in CLI applications create a poor user experience. Using robust input methods (like fgets + sscanf) instead of scanf allows for graceful error handling, informative feedback, and prevents infinite loops or abrupt exits.
**Action:** Always validate CLI user input robustly, handle EOF to prevent infinite loops, and provide clear, colored feedback for invalid entries.
