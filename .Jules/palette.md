## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-06-03 - Graceful Localization in Input Parsing
**Learning:** Users in locales that use commas for decimal separators (like Portuguese) will instinctively type "7,5" instead of "7.5". When using standard C parsing functions like `sscanf`, this can lead to unexpected truncation (e.g., parsing as 7.0), confusing the user. Intercepting and replacing commas with dots before parsing prevents this.
**Action:** When writing C/C++ CLI applications for localized users, proactively replace localized decimal separators (like commas) with dots in user input strings before passing them to parsing functions to prevent silent data truncation and ensure a forgiving user experience.
