## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Handle localized decimal separators gracefully
**Learning:** In Portuguese locales, users naturally input decimal numbers using a comma (e.g., 7,5) instead of a dot (7.5). Standard C functions like `sscanf` with `%f` expect dot separators by default. Not handling this causes valid user input to be incorrectly truncated or rejected, creating a frustrating UX. Intercepting and replacing commas with dots before parsing ensures the CLI gracefully accepts the user's localized format.
**Action:** Always intercept and normalize localized decimal separators (like comma to dot) when parsing floating-point input in CLI applications using standard C functions to gracefully handle user expectations and prevent unexpected truncation.
