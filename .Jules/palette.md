## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2026-06-11 - Robust Input Handling and Validation
**Learning:** Command-line interfaces that take direct user input with `scanf` are prone to infinite loops or crashes when encountering unexpected characters (like letters instead of numbers). Users easily make typos, and without robust input validation that provides clear, actionable feedback (e.g. "Aviso: A nota deve estar entre 0 e 10."), the UX feels fragile. Using `fgets` and parsing it allows for a much more resilient input cycle.
**Action:** Always validate direct CLI input using string buffering (`fgets`) followed by parsing (`sscanf`) and loop until valid, rather than using raw `scanf`. Provide descriptive, color-coded error states to guide the user back to the happy path.
