## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Graceful handling of localized decimal separators
**Learning:** Portuguese users naturally use commas as decimal separators (e.g., '7,5'), which standard C functions like 'sscanf' truncate unexpectedly, leading to frustrating calculation errors. Intercepting and replacing commas with dots before parsing creates a much more forgiving and intuitive localized input experience.
**Action:** Always preprocess CLI text input in localized applications to normalize regional characters (like decimal commas) before type conversion.
