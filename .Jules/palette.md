## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-20 - Robust Input Validation with Helpful Error Messages
**Learning:** Silent failures or abrupt exits on invalid input create a frustrating user experience in CLI tools. Using `fgets` and `sscanf` allows for catching invalid input and providing a clear, colored error message, guiding the user to correct their input without restarting the app.
**Action:** Always prefer robust input reading methods over simple `scanf` to gracefully handle unexpected user input and provide actionable error feedback.
