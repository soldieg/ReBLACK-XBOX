# ReBlack Xbox— BLACK de XBOX para PC [![decomp.dev: Black 0.02% matched](https://decomp.dev/projects/1419097310.svg?mode=shield&version=BLACK&style=plastic)](https://decomp.dev/soldieg/ReBLACK-XBOX)

The ReBlack Xbox Project aims to fully decompile *BLACK* for the original Xbox, reconstruct its code, and work toward a PC recompilation.

## Current status

XBE analysis and function-by-function reconstruction are underway. Work starts with smaller functions and groups functions when they depend on one another. Full decompilation and a PC build are not complete.

**Local reconstruction tracker (2026-10-16):** **333 function candidates** are marked complete and **78** are in progress, out of **13,676** XboxRecomp split candidates (**2.44%** tracker-complete). `sub_00027819` now has a static C reconstruction: all 1,022 bytes match the XBE raw range, derived REA PE and XboxRecomp split; isolated MSVC x86 compilation passes. This does not update published objdiff totals. The allocator root `sub_000285B9` has a manual C draft under static review. A partial semantic review compared its size/lock/error, bin selection, splitting/coalescing, payload, zero-fill, cleanup and callback stages against the saved REA pseudocode without finding a concrete discrepancy; this is not an instruction-by-instruction equivalence proof. Existing static cross-checks confirm its SEH state transition and cleanup path, plus the callback event/order and post-call result flow. A related free-path group now has static C reconstructions for `sub_00027EEB` and cleanup/header adapters `sub_00028F15`, `sub_00029640`, and `sub_000277FD`; `sub_00028D34` has a C draft and fresh partial Ghidra static review across its 478-byte body, which matches XBE raw, derived REA PE and XboxRecomp split. That macrobranch review found no concrete discrepancy; callback target/full ABI and exact SEH frame/table remain unresolved. These open callees precede the `sub_00028F28` resize parent in the queue. Exact SEH frame/table reproduction and full root C review remain pending. Isolated MSVC compilation passes for the recorded sources, while Xbox link/diff and runtime remain pending. This is local static reconstruction status, not a binary-match rate or a measure of whole-game completion. Build/diff and runtime evidence remain separate.

**decomp.dev report (BLACK):** the report now compares all **13,676 XboxRecomp split candidates** against **130** locally compiled reconstruction objects. Objdiff found **47 exact functions / 406 bytes**: **0.0177% exact code** and **0.2113% fuzzy match** across 2,297,156 candidate bytes. The 44 new isolated reconstructions passed local compile and byte comparison; objdiff counted 35 of them in its exact-match totals, while 9 did not register as exact at split-object level. This is an explicitly incomplete candidate snapshot, not a complete linked-unit inventory or whole-game progress measure. The exact-code figure remains below 0.5%; the badge rounds it to **0.02%**.

**Allocator provenance update (2026-10-16):** Static REA evidence now traces the allocator heap context from `0x28195` to global `0x566154`, where 128 list heads are initialized at context offset `+0x180`. The application object containing `0x28C270` follows a separate pool path rooted at `0x2D12E8`. These distinct static origins support different field roles, while whole-program/runtime aliasing remains unresolved. The C draft was kept unchanged; exact SEH frame/handler equivalence, Xbox link/diff, and runtime validation remain pending. No new target/base objects were added, so decomp.dev matching figures are unchanged. The detailed local evidence and executable are not included in this repository.

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
