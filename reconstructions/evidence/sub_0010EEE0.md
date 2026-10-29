# sub_0010EEE0

- Manifest: lot 116, position 34; address order. Candidate span: 664 bytes (0x0010EEE0 to exclusive end 0x0010F178).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xFEEE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xFE260. REA read_bytes evidence ev_cb0d5132ff7b37536860be3e3bfc9ee7a5839ba42979b31fd9b4e809bb8bd07e returned 664 bytes. XBE raw = derived PE = split = REA; span SHA-256 dc28e7ec79a8337f9b797e5995dfcd53d313dbfe36d2942da871fc86c13c1c54.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 664 bytes.
- Source SHA-256 db3ba8197e07436f2560902800227dda437e81056b348cbc00e2554384ba1708; compiled object SHA-256 cfbd4f23d1a497fd0fc970bbcea21377fd822ff267343528d32cb3d74d27ad18; candidate object SHA-256 d416f2571e7f00d4d579c2431ac4f5b76a5071bc40ad8ba64c43f328bb8165f1.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
