## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Inputs with fgets + sscanf
**Learning:** Using `scanf` directly for CLI input in C++ applications can lead to a very poor user experience. Invalid inputs (like text instead of numbers) can cause the application to crash or enter an infinite loop. Combining `fgets` for reading a line and `sscanf` for parsing provides a much safer and robust way to handle user input, allowing for graceful error handling and retry prompts.
**Action:** Always prefer `fgets` combined with `sscanf` over plain `scanf` for reading user input in CLI applications to prevent crashes and provide clear error messages upon invalid input.
