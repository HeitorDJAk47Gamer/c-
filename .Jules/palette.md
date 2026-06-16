## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for CLI input in C/C++ can lead to infinite loops or crashes when users enter unexpected characters (like text instead of numbers). A better UX practice is to read the entire line with `fgets` and parse it with `sscanf`. This prevents input buffer issues and allows for clear, recoverable error messages when input is invalid, making the application feel much more stable and user-friendly. Also, always handle `EOF` gracefully when reading user input.
**Action:** When accepting user input in C/C++ CLI tools, always use `fgets` combined with `sscanf` for safe parsing and predictable behavior on invalid input.
