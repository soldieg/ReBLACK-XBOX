# sub_001F2CD0

- Manifest: lot 141, position 94; address order. Candidate span: 1 bytes (0x001F2CD0 to exclusive end 0x001F2CD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2CD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2050. REA read_bytes evidence ev_56d90603bbf9821367ee9cfbf78e3ce0e5bb86ccee0b64f28da2815ec7a93e90 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 b4f337b46e5b2ba9a81ad3e7b4f82a95f87a84052eaf540d6761694d79605582; compiled object SHA-256 770e3bf8b65a4bdbaae4440826489c78ba1a891e1174760b735c9ceef9eebb9d; candidate object SHA-256 cf73c4518ecdeb02e0566070a1688efc29aea7ce13a9fa01369a166c2e96129d.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
