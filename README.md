# ReBlack Xbox— BLACK de XBOX para PC [![decomp.dev: Black 0.02% matched](https://decomp.dev/projects/1419097310.svg?mode=shield&version=BLACK&style=plastic)](https://decomp.dev/soldieg/ReBLACK-XBOX)

The ReBlack Xbox Project aims to fully decompile *BLACK* for the original Xbox, reconstruct its code, and work toward a PC recompilation.

## Current status

XBE analysis and function-by-function reconstruction are underway. Work starts with smaller functions and groups functions when they depend on one another. Full decompilation and a PC build are not complete.

**Local reconstruction tracker (2026-10-16):** **336 function candidates** are marked complete and **95** are in progress, out of **13,676** XboxRecomp split candidates (**2.46%** tracker-complete). `sub_00027819` has a static C reconstruction: all 1,022 bytes match the XBE raw range, derived REA PE and XboxRecomp split; isolated MSVC x86 compilation passes. This does not update published objdiff totals. The allocator root `sub_000285B9` remains under static review. Its partial semantic review found no concrete discrepancy across the major paths, but does not prove instruction-level equivalence; callback ABI and exact SEH frame/table remain open. The resize helper `sub_00028D34` has a C draft and partial static review across its 478-byte body, which matches XBE raw, derived REA PE and XboxRecomp split. `sub_000A394A` has a C draft for its observed normal realloc paths; its table-owned SEH handler at `0xA39EC` and exceptional cleanup remain unresolved. `sub_001F2750` and `sub_001F2740` each have static C reconstructions of one-byte `RET` leaves, matching REA/PE, XBE raw and split. `sub_00013340` and table candidate `sub_00200810` now have local semantic C adapters; their bodies match REA/PE, XBE raw and split in 634/634 and 56/56 bytes. The helper receives pointers through EAX/ECX at 15 unique callsites from 13 procedures. The slot reference to `sub_00200810` is data only; dynamic caller and both original ABI contracts remain unresolved. These functions remain in progress; Xbox link/diff and runtime are pending. This local static reconstruction status is not a binary-match rate or a measure of whole-game completion. Build/diff and runtime evidence remain separate.

**decomp.dev report (BLACK):** the report now compares all **13,676 XboxRecomp split candidates** against **130** locally compiled reconstruction objects. Objdiff found **47 exact functions / 406 bytes**: **0.0177% exact code** and **0.2152% fuzzy match** across 2,297,156 candidate bytes. The 44 new isolated reconstructions passed local compile and byte comparison; objdiff counted 35 of them in its exact-match totals, while 9 did not register as exact at split-object level. This is an explicitly incomplete candidate snapshot, not a complete linked-unit inventory or whole-game progress measure. The exact-code figure remains below 0.5%; the badge rounds it to **0.02%**.

**Allocator provenance update (2026-10-16):** Static REA evidence now traces the allocator heap context from `0x28195` to global `0x566154`, where 128 list heads are initialized at context offset `+0x180`. The application object containing `0x28C270` follows a separate pool path rooted at `0x2D12E8`. These distinct static origins support different field roles, while whole-program/runtime aliasing remains unresolved. The C draft was kept unchanged; exact SEH frame/handler equivalence, Xbox link/diff, and runtime validation remain pending. No new target/base objects were added, so decomp.dev matching figures are unchanged. The detailed local evidence and executable are not included in this repository.

**Allocator resize reconstruction (2026-10-16):** A local C draft now models the observed normal paths of `sub_000A394A`, including null-pointer allocation, zero-size release, debug alignment, and new-handler retry. It does not claim the table-owned SEH handler or exceptional lock cleanup. This is static reconstruction work only; it adds no target/base objects, so decomp.dev matching figures remain unchanged. The C source and detailed evidence stay in the local workspace.

**Allocator table dispatch progress (2026-10-16):** REA/Ghidra traces the constructor-installed pointer at object offset `+0x23C` to table slot `0x28C130`, whose first entry is `sub_001F2750` (`RET`). The reader body (996 bytes), caller sequence (13 bytes), and leaf byte match REA/derived PE, XBE raw, and XboxRecomp split. Adjacent slot `0x28C134` points to `sub_001F2740`, another one-byte `RET` leaf, with matching bytes; no dynamic callsite for that slot has been identified. Ghidra leaves the first computed call unresolved and runtime dispatch unobserved. The local tracker now includes both static C reconstructions. No target/base objects were added, so decomp.dev matching figures remain unchanged; source code and full evidence remain local.

**Allocator table method follow-up (2026-10-16):** Slot `0x28C138` contains `sub_00200810`; its 56-byte body calls the shared 634-byte `sub_00013340` helper. Both have local semantic C adapters, and their REA/derived PE, XBE raw and XboxRecomp split bytes match. The helper's 15 physical callsites use EAX/ECX live-ins. The slot is only a data reference in current evidence; dynamic dispatch, original ABIs, Xbox link/diff and runtime remain unverified. No target/base objects were added, so decomp.dev matching figures are unchanged; C and full REA evidence remain local.

This public repository contains project documentation, planning, and progress updates. It does not distribute the game executable, disc image, extracted assets, generated lifts, or reconstructed game code.

## Project documents

- [Project status](PROJECT_STATUS.md)
- [Roadmap](ROADMAP.md)
- [decomp.dev reporting status](DECOMP_DEV.md)

## References and tools

- [Black-2006-Recomp](https://github.com/portingpete/Black-2006-Recomp) — a related project consulted for technical context and comparison.
- [XboxRecomp](https://github.com/sp00nznet/xboxrecomp) — used for Xbox-aware XBE analysis and function splitting.
- [REA](https://github.com/morluto/rea) — used for supported reverse-engineering tasks and evidence. It does not accept this project's XBE.
- [Ghidra](https://github.com/NationalSecurityAgency/ghidra) — available for compatible formats; support for this XBE is not assumed.
- [objdiff](https://github.com/encounter/objdiff) — compares per-function target objects with available C reconstruction objects and generates the progress report.
- [decomp.dev project page](https://decomp.dev/soldieg/ReBLACK-XBOX) — registered; GitHub Actions publishes the incomplete 13,676-candidate snapshot. A complete linked-unit inventory is not established.

## AI assistance

- [OpenAI Codex](https://openai.com/codex/) — assists with analysis, reconstruction workflow, and documentation.

**Next table leaf (2026-10-16):** Slot `0x28C13C` points to `sub_001F2730`, a 3-byte `RET 4` sequence. Its semantic C adapter is local; Ghidra does not recognize a function boundary, and the caller/ABI remain unresolved. Xbox build/diff and runtime are pending. Slot `0x28C140` points to `sub_002007D0`, a 54-byte method candidate that calls `sub_00013340` and ends in `RET 8`; its semantic C adapter is local and the dynamic caller/second stack dword remain unresolved. Xbox build/diff and runtime are pending. Source and REA evidence remain local.
