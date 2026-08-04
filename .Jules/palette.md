## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Comma Support for Portuguese Locales
**Learning:** Users in Portuguese locales frequently use commas as decimal separators. Standard C input parsers like `sscanf` may silently truncate inputs like '7,5' into '7.0', causing frustrating errors. Intercepting and replacing commas with dots before parsing creates a far more forgiving and culturally aware CLI UX.
**Action:** Always preprocess CLI string inputs to swap commas for dots before parsing floating-point numbers in localized applications.