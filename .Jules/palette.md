## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2026-08-09 - Handle Localized Decimal Separators
**Learning:** Users in locales that use commas for decimal separators (like Portuguese) often enter numbers with commas intuitively. Standard C parsing functions like sscanf truncate these values if the locale isn't configured for it, leading to frustrating calculation errors. Intercepting and replacing commas with dots provides a more forgiving and accessible input experience.
**Action:** When parsing floating-point input in localized C++ CLI applications using standard C functions, always intercept and replace commas with dots to gracefully handle local formats without forcing users to adapt to system defaults.
