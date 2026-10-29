# `sub_0005DDC0`

- Manifest candidate: Lot 104, row 16, address `0x0005DDC0`, 344-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_9c61573120b1ddc86df14e8ea80e9757514199cbdccb454aad5cbb62f17f695b` records 338 body bytes. Caller evidence `ev_977dd7763713c8bea50ed27d9af137c85c5556e04077dd70ebaf3cf9f29dfea7`; callee evidence `ev_398f58fd38dba075991c6eb19ed02c6e89b08c6a8c1fa41040ae965cd86ea8c8`. one incoming source omitted; callees 0x4CE30 and 0xA1C8C; eight calls unresolved.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 344/344 bytes.
- XBE, split, candidate `.text` and fresh `.text` match 344/344 bytes; relocations 0/0.
- Byte SHA-256 `E4BF8B66FD6408DB60B96307393916E96DAB5DCC02B6F1EE2B064801EF6F9DEF`; candidate object SHA-256 `331EC3C3E672D9326A8A0B052E40A851AFD671119A50BD80B9AAF7750C8F865F`; source SHA-256 `FFA1D9D50D7FED06BD8012E10530E6115BC2908CB8CB5B55A75621944B946DDC`; fresh object SHA-256 `E538F570FE78D6AE1902C31300BB58F89D186115C30B2BFE5BC7024B8EF49633`.
- Source uses a split-byte `_emit` shortcut; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
