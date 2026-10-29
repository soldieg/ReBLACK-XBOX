Candidate `sub_001C3CE0` - manifest lot 138, position 88; address `0x001C3CE0`; candidate span 528 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001c3ce0`; body 520 bytes in 2 ranges: `0x001c3ce0-0x001c3db7; 0x001c3dc0-0x001c3eef`; 1 direct callers, 2 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_223ebcd5137d19f12c18ee13d302585a94ca2d489a2ee131bff1c6916d6db813`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001c3db8-0x001c3dbf` = `8d a4 24 00 00 00 00 90` (0x001c3db8 lea esp, [esp]; 0x001c3dbf nop).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1b3ce0` equal split `.s` bytes, 528/528; byte SHA-256 `1cd76fda66e2bf1f1bad6d2352cd05834a9fb7ddc3a608add8250088e4668477`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `21e9c2d654fd2f4def95812ae66103f273d0f48ef77f0818a0af707e30dc42da`.
