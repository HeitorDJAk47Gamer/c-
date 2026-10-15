## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Graceful Handling of Localized Decimal Separators
**Learning:** In regions where the comma is the standard decimal separator (like Portuguese), standard C parsing functions like `sscanf` will silently truncate inputs like "7,5" to "7.0", leading to incorrect calculations and user frustration. Accepting the user's localized input format is a key micro-UX win.
**Action:** When parsing floating-point input in Portuguese C++ CLI applications using standard C functions like `sscanf`, intercept and replace commas with dots to gracefully handle localized decimal separators and prevent unexpected truncation.
