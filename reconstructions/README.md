# Function reconstruction submissions

This directory is the public home for reviewed reconstruction source and sanitized evidence summaries.

- `functions/<function-id>.c` — one reconstructed function per source file.
- `evidence/<function-id>.md` — source identity, function range, toolchain, evidence references, and per-level validation results.

Use the same stable function ID in both filenames and link the related GitHub Issue from the evidence summary. Keep each result independently reviewable. Do not add game files, extracted binaries, raw target byte dumps, local machine paths, or credentials. Full validation details belong in the PR and evidence summary; the dashboard is updated separately from a reviewed progress report.
