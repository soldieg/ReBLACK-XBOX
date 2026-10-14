# ReBlack Xbox Project [![decomp.dev: Black 0.00% matched](https://decomp.dev/projects/1419097310.svg?mode=shield&version=BLACK&style=plastic)](https://decomp.dev/soldieg/ReBLACK-XBOX)

The ReBlack Xbox Project aims to fully decompile *BLACK* for the original Xbox, reconstruct its code, and work toward a PC recompilation.

## Current status

XBE analysis and function-by-function reconstruction are underway. Work starts with smaller functions and groups functions when they depend on one another. Full decompilation and a PC build are not complete.

**decomp.dev report (BLACK):** one pilot function, 85 bytes, with **3.79% fuzzy match**. This is a single-function sample, not whole-game progress. The exact matched-code measure is **0.00%**, so decomp.dev keeps the project page hidden below its 0.5% visibility threshold.

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
- [objdiff](https://github.com/encounter/objdiff) — used in a local comparison pilot; a project-wide progress metric has not been established.
- [decomp.dev project page](https://decomp.dev/soldieg/ReBLACK-XBOX) — registered; GitHub Actions publishes an explicitly incomplete one-function pilot report. Whole-game progress is not established.

## AI assistance

- [OpenAI Codex](https://openai.com/codex/) — assists with analysis, reconstruction workflow, and documentation.
