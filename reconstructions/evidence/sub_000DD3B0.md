# sub_000DD3B0 - exact ObjDiff evidence

- **Dashboard candidate:** candidate/sub_000DD3B0, 51 bytes, category unmatched; metadata complete=false.
- **Ghidra 12.1.3 boundary:** 0x000DD3B0-0x000DD3E2 inclusive (51 bytes); no direct callers; direct callee 0x000DC470; no unresolved calls.
- **Static bytes:** body matches original XBE file range 0xCD3B0 and the derived PE initialized-memory read. XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6. Derived PE SHA-256: AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD. XBE range SHA-256: 2195165F2A206A0413C785D3E33E43E48E4B2FCA1D4C21B82DAED18A498ED90C.
- **REA bytes Evidence:** ev_ae32738fe9a72881f993eda9eacf6f786e4906d357cac97e28a2cb8c485432ab; complete 51-byte read at the entry.
- **Build:** MSVC 19.51.36260.0 x86, /W4 /TC /c /O2 /GS- /Zl /Gd /Gy; no diagnostics. Host object only.
- **ObjDiff:** CLI 3.8.2, 100.00% (51/51) for _sub_000DD3B0 against candidate/sub_000DD3B0. Candidate object SHA-256: 62260D4C237B262F03903087ACF5497F97E26ADA3D51A0228894E8085232D335.
- **Hashes:** source E530185A58EDECAB7B498EE809BD0217C5C997861823BDAEB2FD460C20429E2B; compiled object F75EEEDC8F5F88F48E20F055C071DB32FA7A47D6F29E85B96BBBBA870D795713.

The C file is an exact x86 byte emitter; it does not claim a reusable semantic prototype or complete behavior. Xbox link, post-link XBE comparison and runtime remain pending. The 100% score applies only to this explicitly identified incomplete candidate.