# sub_000D5BE0

- Manifest: Lot 112, position 38; selected in ascending address order for Lot 104. Candidate span: 265 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000D5BE0; body bytes 262, ranges 000d5be0-000d5c8c;000d5c90-000d5ce8. Direct incoming call-reference export: 2 reference(s), caller(s): 000d6f65@000d6eb0;0020aad2@0020a790. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xC5BE0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xC4F60. XBE raw = derived PE = XboxRecomp split for the full 265-byte span; SHA-256 3af10045ec3374c092058d2e930ca9cf765fc045f50e56957e69c6348bbb559b. REA read_bytes evidence ev_7901d063ccdcf830e297dd0514db845c6d5caa5b7548882c096c1b71a360a4fc returned 265 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 265 bytes.
- Source SHA-256 91362464ce4a1b811c2a797a53f7f0e24e9a98063e9b17da7afc353bcc370a92; fresh object SHA-256 e38ca8920c401be059b9a86685ea4916b720262e9af88d29cba7bdd6b85c9177; candidate object SHA-256 e2df096b483fb3e69717f4214ae53969e6e73642c85f0dae4430575a78b06cc9.
- GitHub Issue: #8570 (https://github.com/soldieg/ReBLACK-XBOX/issues/8570).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
