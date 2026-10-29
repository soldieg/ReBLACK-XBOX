Candidate `sub_001CBC60` - manifest lot 139, position 19; address `0x001CBC60`; candidate span 325 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cbc60`; body 322 bytes in 2 ranges: `0x001cbc60-0x001cbcac; 0x001cbcb0-0x001cbda4`; 2 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_fceb8f02340c0d1e84775cf2d143ffe4ee2d1ad552e339048ffb11500b133ff2`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cbcad-0x001cbcaf` = `8d 49 00` (0x001cbcad lea ecx, [ecx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bbc60` equal split `.s` bytes, 325/325; byte SHA-256 `7c376c392244e10debf0d577eefa30e5a315dfa209e280d745159edde9e0a443`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `fb68c271ffc1bf900466d5827cf52342e6b1b27de61ffebbfaa6883c47c518c2`.
