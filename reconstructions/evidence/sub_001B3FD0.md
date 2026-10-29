# sub_001B3FD0

- Manifest: lot 134, position 26; address order. Candidate span: 20 bytes (0x001B3FD0 to exclusive end 0x001B3FE4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3FD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3350. REA read_bytes evidence ev_37af5be9e676764ee7d589273297df4b8ba909d288b26aa0a3dd59c8de9ea62d returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 6bdd4bd960298f3d2007c2700420bbed36e58efc6cd0125e30f6e509ee5d93ec.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 273d2e9e3ceb2a571524832e88d32b982be5bcacb33ac7449b8e31f29975d1df; compiled object SHA-256 805d55469e3764c8e93a2b0f1e886d10d286f87552678e81169cb8604caf5ad0; candidate object SHA-256 53175eafb856184936e56af70e04d3b6453bb49b452bc309a31348151281d1b4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
