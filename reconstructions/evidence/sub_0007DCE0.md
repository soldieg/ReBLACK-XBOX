# sub_0007DCE0 — exact-byte reconstruction

- **Target range:** `0x0007DCE0–0x0007DD45` (inclusive), 102 bytes.
- **Published source SHA-256:** `1621e45bd05733154c7c61a64e2b0d02fbe6b24e5feb801408faf47ff06e8fb7` (UTF-8 text with Git's LF line endings).
- **Reconstruction:** address-pinned x86 byte emitter in `reconstructions/functions/sub_0007DCE0.c`.
- **Static exactness:** PASS — isolated output matches the XBE body, XboxRecomp reference, and split span; ObjDiff 3.8.2 reports 100%.
- **Isolated compile:** PASS — MSVC 19.51.36260 x86.
- **Scope:** exact machine-code bytes for this function body only. This does not establish semantic-C equivalence, Xbox full-link success, or runtime behavior.
