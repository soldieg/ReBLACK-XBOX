# sub_0012ABD0

- Manifest: lot 119, position 78; address order. Candidate span: 3 bytes (0x0012ABD0 to exclusive end 0x0012ABD3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ABD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119F50. REA read_bytes evidence ev_4eb2f5b554acf0fd9a2dfdddc0b4c9efe9e1c80cdf857fcb4fbc1fc5d4f7f285 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e598d0c3ba86d917b177d7adde0556aa99bc355543c57aee0a3e50b684dd7e99.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 416dbf7065fca51c9b84389976533dd02cb84273578d9497d0e1fb756816c4b0; compiled object SHA-256 afdebddd867f05e0aed9bfdb246c62012de83023b4ec0c89b00c5b7b31d6f803; candidate object SHA-256 57cc00e05b62c36364374c9253703660e6a9d3aa0b2f8fa32ee904fa5763a42e.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
