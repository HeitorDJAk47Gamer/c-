## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Localized Decimal Separators
**Learning:** In localized CLI applications (e.g., Portuguese), users naturally input floating-point numbers using commas as decimal separators. Standard C parsing functions like sscanf with %f expect dots, leading to silent truncation and incorrect calculations. Replacing commas with dots before parsing prevents these subtle bugs and creates a more forgiving, natural user experience.
**Action:** Intercept and replace commas with dots when parsing floating-point input in Portuguese C++ CLI applications to gracefully handle localized decimal separators and prevent unexpected truncation.
