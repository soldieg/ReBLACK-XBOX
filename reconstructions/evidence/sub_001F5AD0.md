# sub_001F5AD0

- Manifest: lot 143, position 27; address order. Candidate span: 3 bytes (0x001F5AD0 to exclusive end 0x001F5AD3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E5AD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E4E50. REA read_bytes evidence ev_5db775c9474b1b414d938c1bf607eb94f1484545517b4b9c44b4a89f3cb0dce7 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 01cb47d078b4841b8408ec4fe278efa83115c6f6e101972987507d2b2b57dcf0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 dd34c7fec7d009dc5ef8748fa495412e8d01d098628c26f93baf4c5b2aab8b03; compiled object SHA-256 b797052c279ce77d20f1ba86a3b7b6f5257d445044827cb40a7efa0c6093cb23; candidate object SHA-256 8c61164b653203bb7786c189dd733c08c1e3979422081dccddd8a61af47cba82.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
