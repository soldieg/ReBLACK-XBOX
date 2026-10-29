# sub_000E1CB0

- Manifest: lot 113, position 9; address order. Candidate span: 44 bytes (0x000E1CB0 to exclusive end 0x000E1CDC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1CB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1030. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 44 bytes. XBE raw = derived PE = split = REA; span SHA-256 8347be00e4a637c8e4dd1bb7a1fd039495bb1ad0fb816e5798e29e302885acb9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 44 bytes.
- Source SHA-256 4f827b24cf98c16eb2f2640a52c60baa8daba40f8a7dc91ff0e1347e82c418cd; compiled object SHA-256 be0102d180d8c7b4243008a3a796a20cd1215b552bd1befecc80af24cb40de5a; candidate object SHA-256 81d7822bca97a7b6f1e753ee745a3457f3b342176eef71f600fb7b6ad01009aa.
- GitHub Issue: #10421 (https://github.com/soldieg/ReBLACK-XBOX/issues/10421).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
