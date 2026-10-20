## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using scanf directly in CLI applications can lead to poor user experience, as invalid inputs cause immediate crashes. A robust approach using fgets and sscanf allows for graceful error handling and reprompting, making the CLI much more forgiving and accessible.
**Action:** Always prefer fgets paired with sscanf for reading user input in C/C++ CLI tools, ensuring EOF conditions are handled gracefully to prevent hangs, and providing clear, localized error messages on invalid input.

## 2024-05-19 - Graceful handling of localized decimal separators
**Learning:** In Portuguese CLI applications, users naturally input decimal numbers using a comma instead of a dot. Standard C parsing functions like sscanf often truncate these values silently, leading to incorrect calculations and user confusion. Intercepting and replacing commas with dots before parsing gracefully handles this localized input.
**Action:** Always preprocess localized numeric input strings in CLI tools to convert locale-specific separators into standard formats before parsing, ensuring expected behavior without frustrating the user.
