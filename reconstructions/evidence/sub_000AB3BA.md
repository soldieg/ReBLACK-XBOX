# sub_000AB3BA

- Manifest: lot 106, position 83; address order. Candidate span: 16 bytes (0x000AB3BA to exclusive end 0x000AB3CA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B3BA; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A73A. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 a56972be499c434a1395eec6d91d9f1a3e2e82de002d06c4a13db0e73aa9e58d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 08d951b392dbf900deaa24e0f56a2f28c83a76a60cdc919476b19a4ed8c68546; compiled object SHA-256 5f9941e865592372013cefc8201f02e2e01b90f49a811ef4e5811fea8307fa82; candidate object SHA-256 aa1084d29edc02b8e3b02ced1984afeab5de80fe71b03b04a87d217b478df814.
- GitHub Issue: #9910 (https://github.com/soldieg/ReBLACK-XBOX/issues/9910).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
