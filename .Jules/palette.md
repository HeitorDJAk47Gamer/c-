## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Handle Localized Decimal Separators in CLI Input
**Learning:** In localized CLI applications (e.g., Portuguese), users naturally type commas as decimal separators (like 7,5). Standard C functions like `sscanf` with `%f` expect dots and will truncate the input silently (reading 7 instead of 7.5), leading to unexpected behavior and a frustrating UX. Intercepting and replacing commas with dots gracefully handles this without burdening the user.
**Action:** Always intercept and normalize localized decimal separators (e.g., replace ',' with '.') before parsing numeric strings with standard C functions in CLI applications to ensure graceful input handling and prevent silent truncation.