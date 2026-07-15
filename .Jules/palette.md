## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust CLI Input with fgets
**Learning:** Using `scanf` directly for user input in CLI applications can lead to abrupt crashes or infinite loops when users enter invalid characters. Validating input via `fgets` and `sscanf` and providing clear, actionable error messages (e.g., in Portuguese "Entrada inválida! Por favor, digite um número.") greatly improves error recovery and user trust.
**Action:** For CLI inputs, always prefer `fgets` paired with `sscanf` for parsing, ensure EOF is handled gracefully by exiting, and include friendly error retry prompts instead of hard crashes.
