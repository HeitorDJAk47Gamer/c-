## 2024-05-17 - Improved CLI inputs and outputs\n**Learning:** CLI applications benefit greatly from simple UX improvements like spacing out prompts and clear result labels.\n**Action:** Add spaces after prompts and use clear labels for output to improve readability.

## 2026-05-30 - Robust CLI Input Handling
**Learning:** In C++ CLI applications, `scanf` can silently fail and cause unexpected behavior if a user enters a non-numeric character when a number is expected. Handling input failures by clearing the buffer and retrying makes the program much more resilient.
**Action:** Always wrap standard inputs in a retry loop that clears the input buffer on failure and checks for EOF to avoid infinite loops.
