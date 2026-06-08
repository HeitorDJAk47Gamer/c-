## 2024-05-17 - Add Semantic Colors to CLI Output
**Learning:** Terminal apps benefit greatly from simple micro-UX touches. Adding semantic colors (green for success, red for failure) and an application title dramatically increases glanceability and cognitive ease, making the CLI experience feel polished and intuitive rather than stark and mechanical.
**Action:** Always consider basic ANSI color codes for pass/fail/error states in CLI tools to improve readability and immediate visual feedback.

## 2024-05-18 - Improve CLI Visual Hierarchy and Error Feedback
**Learning:** Adding visual hierarchy (like making headers bold and a different color, and bolding final results) significantly helps users scan the CLI output. Also, silently crashing on bad input leaves the user confused. Always provide clear, colored error messages so the user knows exactly what went wrong and how to fix it.
**Action:** Always consider the visual structure of text-based output, using bolding and colors to emphasize important information. Provide descriptive error feedback instead of silent failures.
