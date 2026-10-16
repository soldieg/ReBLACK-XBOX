# Project status

**Snapshot date:** 2026-10-16
**State:** analysis foundation and tooling are in place; function-level reconstruction continues. A complete game recompilation has not been established by the artifacts listed here.

## Work present in the local workspace

- A preserved copy of the original Xbox game and a documented XBE identity/integrity check.
- Structural XBE analysis: headers, sections, imports, strings, references, ABI estimates, function catalog, and disassembly.
- **13,676** split function assembly files, preserving instruction/byte evidence.
- Two unique XboxRecomp-generated C lift snapshots. These are approximate instruction translations, not original source.
- The local tracker marks **312 function candidates complete** and **75 in progress** out of 13,676 split candidates (**2.28%** tracker-complete). This is a local static reconstruction status; build/diff and runtime validation are tracked separately and are not implied by this count.
- Current dependency group: `sub_000A5900` is complete at the static C-review level; `sub_000A3A37` has a reviewed C body but remains in progress until the full allocator `sub_000285B9` is reconstructed. Build/diff and runtime remain pending for this group.
- A separately validated subset includes 44 isolated function reconstructions that compiled and matched their recorded Xbox byte spans. Six still have unresolved global/table dependency groups; five other candidates failed byte comparison and are excluded from those exact-match results.
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
- The project is registered at [decomp.dev](https://decomp.dev/soldieg/ReBLACK-XBOX). GitHub Actions publishes an explicitly incomplete report over 13,676 XboxRecomp split candidates; 130 locally compiled reconstruction objects were compared, with 47 exact function matches (406 bytes, 0.0177% exact code). The 44 new local build-and-byte-diff results contributed 35 functions to objdiff exact totals; nine did not register as exact at split-object level.
- The local static-review tracker (312 complete, 75 in progress as of 2026-10-16) is a separate progress measure and does not change the decomp.dev binary-match result.
- The report is not a complete linked-unit inventory: the split ranges include heuristic boundaries and 1,517 overlaps, and the broader detector produced 16,598 candidates. The 0.2113% fuzzy match is a candidate-snapshot measure, not whole-game completion. Six new reconstructions remain semantically pending because of shared global/table dependencies; all report units remain explicitly incomplete.
