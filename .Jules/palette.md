## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.
## 2024-05-24 - Robust CLI Input Validation
**Learning:** Using `scanf` directly for user input in C/C++ CLI apps without flushing the buffer can lead to infinite loops or crashes if the user enters invalid characters. This creates a terrible user experience when someone makes a typo.
**Action:** Use `fgets` to read the entire line, then `sscanf` to parse it. Also, always handle EOF correctly so the app can exit gracefully when input streams close.
