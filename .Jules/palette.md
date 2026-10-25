## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Localized Decimal Separators in CLI
**Learning:** In localized CLI applications, users often input numbers using their region's decimal separator (e.g., comma in Portuguese). Standard input parsing (like sscanf) might truncate these inputs without warning, leading to silent calculation errors and a frustrating user experience.
**Action:** Always preprocess user input to normalize decimal separators (e.g., replacing commas with dots) before parsing floats in localized CLI tools, ensuring accurate data entry and a forgiving interface.
