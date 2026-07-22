## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input Handling
**Learning:** Relying on basic scanf for CLI inputs can lead to silent exits or infinite loops upon invalid input. Using fgets with sscanf allows for graceful error handling, reprompting, and a more forgiving user experience.
**Action:** Always use fgets combined with sscanf for reading and parsing CLI input to ensure robustness and provide helpful error messages.
