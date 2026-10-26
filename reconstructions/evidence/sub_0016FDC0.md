# sub_0016FDC0

- Function task: [#6016](https://github.com/soldieg/ReBLACK-XBOX/issues/6016).
- Counted in lot 57 with the connected `sub_0016FE10` → `sub_0016FDC0` → `sub_0016FC90` group; the C source is an address-pinned byte emitter.
- Local Ghidra 12.1.3 body: `0x0016FDC0–0x0016FE05` inclusive, contiguous, 70 bytes. Derived PE SHA-256: `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`.
- Observed caller: `sub_0016FE10` at `0x0016FEE8`. Callees: `sub_0016FC90` at `0x0016FDEE` and `sub_00164F50`. Ghidra reported no unresolved direct calls.
- Memory bytes SHA-256: `32381ebee246d688c3987cc775e7e2655783ec822d8f0a1a06b653b026b9b34e` (70 bytes).
- Static equality: Ghidra memory = XBE raw = derived PE = XboxRecomp split = named candidate object `_sub_0016FDC0` = compiled `.text$mn` = source emitter, 70/70 bytes. XBE raw offset `0x15FDC0`; derived PE raw offset `0x15F140`.
- MSVC 19.51.36260 x86 compilation succeeded without diagnostics. ObjDiff 3.8.2: 100.00% for `_sub_0016FDC0` against the named candidate object.
- Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime/gameplay were not tested.
