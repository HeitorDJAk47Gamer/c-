## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Graceful Handling of Localized Decimals
**Learning:** In Portuguese CLI applications, users naturally use commas as decimal separators. Using standard C parsing functions like sscanf directly causes unexpected truncation (e.g., "7,5" is read as "7"). Intercepting and replacing commas with dots before parsing provides a much more intuitive and forgiving user experience, preventing silent data loss.
**Action:** Always preprocess floating-point input strings in localized CLI tools to replace commas with dots before passing them to parsing functions like sscanf.
