# `sub_000A8C2B`

- Manifest candidate: Lot 106, row 50, address `0x000A8C2B`, 60-byte span. Live REA/Ghidra 12.1.3 boundary evidence `ev_ad46286c658a9ea747b204b3331c7cea539f5f5928005832c770356919f7102f` records 53 body bytes. Caller evidence `ev_2f8210a07b7fbef47bdeb934d8124d0bb3e240b16c822bdb4376b34438f7b2af`; callee evidence `ev_dd63119a5c287419f09c735e45931bc2688be54357c082da2c984761c276d28c`. three callers resolved; two callees resolved and three calls unresolved.

## Fresh static validation (2026-10-29)

- MSVC x86 compile passed with `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- ObjDiff 3.8.2 against the candidate object: 100.00%, 60/60 bytes.
- XBE, split, candidate `.text` and fresh `.text` match 60/60 bytes; relocations 0/0.
- Byte SHA-256 `2B2E52390BE8D9D209E875085C9E731489C990EDECCA76369C63C8568B1215F2`; candidate object SHA-256 `1A300261F5AB3467F702C758B12E918E89C18D3CC00DEAE11279C8749E3F24C3`; source SHA-256 `884F1DC9425FD5EE62F5306B42C28DD298F3B71911CDC14B0DDA57BE9B615236`; fresh object SHA-256 `98DB2760C5530300B118C42D4CA79A1FF4BFF15BBABAB095471AFD14C18564B0`.
- Source uses a split-byte `_emit` shortcut; semantic C/formal ABI, Xbox link, post-link XBE diff, and runtime remain unverified.
