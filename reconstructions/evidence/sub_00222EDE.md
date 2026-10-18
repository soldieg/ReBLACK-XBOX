# sub_00222EDE — reconstruction evidence

- **Candidate range:** `0x00222EDE`–`0x00222EE2` (end exclusive), 4 bytes; raw file offset `0x212F1E`.
- **Target identity:** BLACK Xbox XBE, SHA-256 `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- **Reconstruction source SHA-256:** `ED1080FC0B1F422D40A682ECE2752D3425E374D4628408BC0F2E34B900F172DB`.
- **Isolated compile:** PASS — MSVC 19.51.36260 x86, `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- **ObjDiff 3.8.2:** EXACT, 100% for the selected body. Symbol normalization changes only the COFF symbol name.
- **Byte comparison:** PASS — compiled function body matches the XboxRecomp candidate body and the selected XBE range byte for byte (4/4). The raw bytes and binary artifacts are not included in this repository.
- **Callers recorded by the local crosswalk:** 0x00221BCF.
- **Xbox full link/runtime:** PENDING; this isolated result does not establish either.
- **Boundary:** XboxRecomp split candidate with heuristic boundaries; exactness applies to the selected address and span.

## Reproduction scope

The public source and this summary record the toolchain, candidate identity, and validation result. The target executable and detailed local evidence bundle are retained outside this public repository.
