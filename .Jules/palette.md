## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-10-24 - Robust CLI Input Validation
**Learning:** In C++ CLI applications, using `scanf` can lead to crashes or infinite loops when users provide unexpected input types (like strings instead of numbers). Using `fgets` combined with `sscanf` allows for safer input parsing, enabling graceful error messages and recovery prompts without crashing the app.
**Action:** Always prefer `fgets` and `sscanf` over `scanf` for reading user input in C/C++ CLI tools, ensuring to handle end-of-file (EOF) conditions to provide a robust user experience.
