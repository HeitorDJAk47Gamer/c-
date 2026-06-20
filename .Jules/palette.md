## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Robust Input Validation for CLI User Experience
**Learning:** Abruptly terminating a CLI application due to simple typographical errors in data entry creates a highly frustrating user experience. It forces the user to restart their entire workflow. Using robust input validation loops (e.g., `fgets` combined with `sscanf` in C++) allows the application to gracefully catch invalid characters, provide immediate, color-coded feedback (like yellow warnings), and prompt again, keeping the user seamlessly engaged in their task.
**Action:** Always implement robust input reading loops with clear, forgiving error messages in CLI forms, and ensure you gracefully handle end-of-file (EOF) conditions to prevent infinite loops.
