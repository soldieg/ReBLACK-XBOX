# Project status

**Snapshot date:** 2026-10-14  
**State:** analysis foundation and tooling are in place; function-level reconstruction continues. A complete game recompilation has not been established by the artifacts listed here.

## Work present in the local workspace

- A preserved copy of the original Xbox game and a documented XBE identity/integrity check.
- Structural XBE analysis: headers, sections, imports, strings, references, ABI estimates, function catalog, and disassembly.
- **13,676** split function assembly files, preserving instruction/byte evidence.
- Two unique XboxRecomp-generated C lift snapshots. These are approximate instruction translations, not original source.
- **86** manual C reconstruction files: 79 marked complete and 7 in progress in the function tracker. Two additional focused-lift review drafts are tracked separately and are not included in that count.
- **12** isolated function harnesses and **10** standalone object files. These validate narrow contracts and do not prove whole-level or gameplay behavior.
- A local XboxRecomp tool snapshot, REA CLI 6.4.0, and Ghidra 12.1.4 for compatible targets. The XBE workflow uses XboxRecomp; Ghidra's acceptance of this XBE is not assumed.

## What the inventory does not prove

- Complete recovery of the game's original source.
- A full executable rebuild or binary equivalence.
- Correct behavior across a complete level or gameplay session.
- That generated C lifts preserve all original semantics.

## Working approach

1. Select a specific function or subsystem and state the question to answer.
2. Use XboxRecomp's XBE-aware tools for XBE parsing, splitting, and recompilation work. Use REA for supported analysis and to retain evidence; record any unsupported operation explicitly.
3. Trace the function from bytes/instructions through callers, data, and observed behavior before changing a reconstruction.
4. Keep original artifacts, generated lifts, manual reconstructions, and harnesses distinct and traceable by source identity and hash.
5. Report the evidence level clearly: static analysis, isolated harness, process/runtime observation, or visible gameplay.

## Current integration state

- The public GitHub repository is intended to hold status and planning documents, not a copy of the local game-data workspace.
- The project is registered at [decomp.dev](https://decomp.dev/soldieg/ReBLACK-XBOX). GitHub Actions publishes an explicitly incomplete report over 13,676 XboxRecomp split candidates; 86 local C reconstruction objects were compared, with 12 exact function matches (85 bytes, 0.0037% exact code).
- The report is not a complete linked-unit inventory: the split ranges include heuristic boundaries and 1,517 overlaps, and the broader detector produced 16,598 candidates. The 0.1973% fuzzy match is a candidate-snapshot measure, not whole-game completion.
