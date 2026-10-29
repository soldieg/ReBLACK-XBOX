# sub_0010FFB0

- Manifest: lot 116, position 37; address order. Candidate span: 64 bytes (0x0010FFB0 to exclusive end 0x0010FFF0).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xFFFB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xFF330. REA read_bytes evidence ev_cb0d5132ff7b37536860be3e3bfc9ee7a5839ba42979b31fd9b4e809bb8bd07e returned 64 bytes. XBE raw = derived PE = split = REA; span SHA-256 ab3be8d812bb80574d0f371a7e5bb129e65b4364d0122edb5cdbde1082647009.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 64 bytes.
- Source SHA-256 770b757f1a705ecb770a3073fb4608acaae639f09c6ba1e3b3771a6a56074245; compiled object SHA-256 5091b026166d149ca9089b7f05bddc1c5e405ffd60304ceae44b64bfda9fee5f; candidate object SHA-256 fc1ec4e9d9c57882c56cef456f17aa9ef4a4ad3abb7d95f28674d6cd9257f4b6.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
