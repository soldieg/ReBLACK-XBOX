# sub_001FD9C0

- Function task: [#8419](https://github.com/soldieg/ReBLACK-XBOX/issues/8419).
- Batch: 81 (100 functions).
- Ghidra 12.1.3: contiguous body 0x001FD9C0–0x001FDF61 inclusive, 1442 bytes, 333 instructions; Evidence ev_2230f8549aec7fb267b49c66a3cb2f395fd7a1acaecb24540ee118cede66736a.
- Static Ghidra relationship facets: 0 procedure callers and 8 direct callees observed; 2 computed/indirect call destinations unresolved and 0 unresolved direct calls. These are static observations, not runtime evidence.
- Bytes: original XBE section-mapped data = derived PE section-mapped data = Ghidra body = XboxRecomp split, byte for byte; SHA-256 6a716370591cea23841eff8573dafdab647659950049cda30dc57db092d48844.
- Compiler: MSVC 19.51.36260 x86; /nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; compiled without diagnostics.
- ObjDiff 3.8.2: 100.00% against named candidate object sub_001FD9C0.obj, symbol _sub_001FD9C0, 1442 bytes.
- Candidate and compiled COFF .text$mn: identical (1442/1442 bytes); relocations 0/0; SHA-256 6a716370591cea23841eff8573dafdab647659950049cda30dc57db092d48844.
- Source SHA-256: be0fdd550b47d7c10bfa8e6d0dfc69d1b89068833ade2c559a5557c164d2d660.

Source is an address-pinned byte emitter, not semantic C or formal ABI confirmation. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
