## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-20 - Robust C++ CLI Input Validation
**Learning:** Relying on scanf directly for numeric CLI input creates a brittle UX where unexpected characters cause immediate exits without helpful feedback.
**Action:** Always implement a loop using fgets to read the full line and sscanf to parse it, providing clear, color-coded error messages on failure and handling EOF (NULL return from fgets) gracefully by exiting.