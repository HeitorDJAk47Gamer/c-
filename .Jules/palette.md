## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust Input Validation for CLI Apps
**Learning:** Using basic standard input like `scanf` can lead to bad user experiences when users type unexpected characters (infinite loops or crashes). Leveraging `fgets` combined with `sscanf` for input extraction, and handling `NULL` (EOF), prevents infinite loops and exits gracefully, keeping the terminal experience smooth and intuitive.
**Action:** Always prefer `fgets` and `sscanf` over `scanf` for user input, handling parsing errors with clear instructions in the application's native language, and including visual feedback like ANSI color codes.
