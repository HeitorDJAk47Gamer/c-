## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Silent failures or infinite loops on invalid input in CLI applications create a confusing and frustrating user experience. Using robust input methods like `fgets` with `sscanf` allows for clear error messages and safe recovery without crashing the app.
**Action:** Always use robust input handling in CLI tools to validate user input and provide clear, actionable error feedback instead of failing silently.
