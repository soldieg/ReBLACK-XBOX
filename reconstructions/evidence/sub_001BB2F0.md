# sub_001BB2F0

- Function task: [#1474](https://github.com/soldieg/ReBLACK-XBOX/issues/1474).
- Function range from REA/Ghidra dossier: 0x001BB2F0-0x001BB339 inclusive, contiguous, 74 bytes.
- Function dossier evidence: ev_fb1e331d64409827f89019c8dc717983476423d50714738480b4e7ee4eae4f3a.
- Call analysis: REA/Ghidra dossier recorded zero direct calls and zero unresolved calls.
- Dashboard candidate: sub_001BB2F0, 74 bytes, category unmatched in snapshot SHA-256 79caa1084f9019b63f8ee40a6dffb2eee6fabe9879fddd9ba17ff3fd0eac870c (retrieved 2026-10-24).
- Candidate object: candidate/sub_001BB2F0.obj from the identified progress snapshot; SHA-256 62809f8358d4c2dca792d108a7f736a48e6120bf016630b437d793a292faa3a8; candidate relocations 0.
- Target Xbox XBE SHA-256: df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; compared raw file span at offset 0x1AB2F0.
- Derived PE SHA-256: AABDEBF414D216E67161DF9DDF1DAC5FD915EBB59BD2B26AE42E062C245682BD; mapped raw file span offset 0x1AA670.
- Byte provenance: static read of the original XBE raw span. REA byte-read API was unavailable for this lot; no REA byte read is claimed.
- Source SHA-256: 7a57abf9c77c971768abb9d77d18fbf01b766a56b654b8f3c3b2bb2a3da3a9a7.
- Compiler: MSVC 19.51.36260.0 x86; /TC /c /O2 /GS- /Zl /Gd /Gy; compile passed.
- ObjDiff 3.8.2 against the named candidate object: 100.00%; compiled symbol: 100.00%.
- Exact static bytes: original XBE raw span = mapped derived-PE span = candidate .text$mn = compiled .text$mn, 74/74 bytes.
- Compiled COFF relocations: 0; compiled object SHA-256: 7fd02c4e1e5cb2ecf8acd14a95826f532a581dcdc7f12df13016b9c894e34879.
- Compiled .text$mn SHA-256: 98980d164da6a6634ac97b76ab1da36fc4e8ca02b7eb7e585822125a3ac9a660.
- Source is an address-pinned byte emitter; semantic C, original types, and formal ABI are not claimed. Xbox full link, post-link XBE diff, and runtime were not run.
