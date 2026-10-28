# `sub_0012EEF0` — static exact-byte validation

- Dashboard candidate: `unmatched`, expected span 201 bytes; no prior exactification-map record or Issue was found. Status record: [Issue #8596](https://github.com/soldieg/ReBLACK-XBOX/issues/8596).
- Ghidra 12.1.3 confirms a 192-byte body in two ranges: `0x12EEF0–0x12EF06` and `0x12EF10–0x12EFB8`. The 9-byte gap is alignment skipped by a jump. Caller and callee queries both have complete coverage and return none.
- Ghidra byte read is complete at 201/201 bytes (Evidence `ev_ae8ec384fde0a69503ccc1f4a85ed27bd3c1033c17de87de84ed5ef31bdabd2f`). Address-to-file mapping reports PE file offset 1,172,080 / `0x11E270` (Evidence `ev_32a216497ad3fe3f8a9cdebad14e07dd9a0f7f08f1d889baca60387c58c04a94`). REA bytes match the derived PE at that offset, the original XBE at raw offset `0x11EEF0`, and the XboxRecomp split (201/201 each). Split SHA-256: `51339960D4769116E7CD3540EB13CD02C29AEAADEFA3C482527B29EBE1F95B43`.
- MSVC 19.51.36260 x86 compiled the address-pinned source without diagnostics using `/nologo /W4 /TC /c /O2 /GS- /GR- /Zl /Gd /Gy`. Source SHA-256: `E9E187CC154E3254A751280845DE40B97AAB81CEA017814AAD490D8CE137B26A`.
- ObjDiff 3.8.2 reports `_sub_0012EEF0` and `.text$mn` at 100.00% for 201 bytes. Raw report: `sub_0012EEF0.objdiff.json` (SHA-256 `A3DE4FAA702DD5F84244040A0919E23E0539D1E99A8B99FCCAC801FA954B1E40`). Compiled object SHA-256: `E3EB08E6068A184DE60B99EBF6ACB34F352A5FDB1CE825F99AAD7011FFCC1D66`; named candidate object SHA-256: `957877EBEB4CA91ED894945FAA94D244449E198C219DBD594343121190E5538E`.
- The candidate comes from the historical refresh inventory marked `complete=false`; this is not evidence of a complete Xbox build.

This is an address-pinned byte emitter, not semantic C or formal ABI recovery. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending. It advances the supported lot 82 count from 86/100 to 87/100. The dashboard and PR remain unchanged until 100 functions are reconciled.
