## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2026-06-02 - Don't rely solely on color for status
**Learning:** Relying solely on red/green colors for terminal output feedback is inaccessible to colorblind users. It is critical to provide an alternative visual indicator (like a symbol) in addition to color to convey the status successfully.
**Action:** Always pair color changes with distinct symbols (e.g., ✓ for success, ✗ for failure) or text differences to ensure the state is distinguishable by everyone.
