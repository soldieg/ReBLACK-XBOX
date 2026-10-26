# sub_0016FAB0

- Function task: [#6015](https://github.com/soldieg/ReBLACK-XBOX/issues/6015). New dedicated Issue; no existing task for this candidate was found.
- Counted for lot 57 of the current 100-lot run; the source and dossier are new in this checkout.
- Local Ghidra 12.1.3 body: 0x0016FAB0–0x0016FC3E inclusive, contiguous, 399 bytes. Derived PE SHA-256: aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd.
- Direct callers: site 0x00177843 in sub_001777A0, and site 0x001EE93A in sub_001EE820. Direct callees: sub_000A34D4 at 0x0016FAED, 0x0016FB06, and 0x0016FB1E; sub_00269880 at 0x0016FC33. No unresolved direct calls were reported.
- Ghidra memory-read SHA-256: a5a1ede08a3a952c81a62b57d4b9f21304b203500c042506779e61deb73a03ab (399 bytes).
- Static equality: Ghidra memory = original XBE raw = derived PE = XboxRecomp split = named candidate object _sub_0016FAB0 = compiled .text$mn = source emitter, 399/399 bytes. XBE raw offset 0x15FAB0; derived PE raw offset 0x15EE30.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; succeeded without diagnostics.
- ObjDiff 3.8.2: 100.00% for _sub_0016FAB0 against the explicitly named candidate object; matched symbol size 399 bytes. Candidate object SHA-256: 652fb9703514aafd7883302d3df00a1f838629ca53ebfe363c02dc033944fd8b; compiled object SHA-256: d71980857cf9d9a2d5d1e9a35df6d0117c5ab540e62d3fc15728d76c140d8e9d.
- Source is an address-pinned byte emitter; semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime/gameplay were not tested.
