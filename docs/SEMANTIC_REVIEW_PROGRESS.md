# Semantic review queue for functions below 80%

**Snapshot date:** 2026-10-18  
**Scope:** 26 functions selected from the saved pre-exactification ObjDiff snapshot. This queue is separate from the 346-function exactification queue and from the 13,676-candidate project snapshot.

| Status | Count |
| --- | ---: |
| Reviewed | 10/26 |
| Raised to 80% or higher | 3 |
| Still below 80% or ABI not comparable | 7 |
| Not yet reviewed | 16 |

## Reviewed entries

| Function | Baseline | Best review score | Result |
| --- | ---: | ---: | --- |
| `sub_00033C70` | 70.35714% | 75.62222% | Paused below threshold |
| `sub_0003B3D0` | 58.22059% | 83.2623% | Reached review threshold |
| `sub_0003B2D0` | 55.92157% | 81.08889% | Reached review threshold |
| `sub_0008A0E0` | 48.438595% | Not comparable | Seven-argument baseline does not match observed six-argument ABI |
| `sub_0002B2B0` | 47.35% | 81.3% | Reached review threshold |
| `sub_0008AB20` | 20.203007% | 20.203007% | Paused; inline probe did not change score |
| `sub_0008A490` | 19.290323% | 36.31818% | Paused below threshold |
| `sub_00089830` | 0.561798% | 0.561798% | Paused below threshold |
| `sub_0008AAA0` | 0% | Not comparable | Observed live-ins do not match the preserved C adapter |
| `sub_00088250` | 0% | Not comparable | Helper register/x87 ABI does not match the preserved C adapter |

An 80% ObjDiff score is a triage threshold only. It does not establish exact equivalence, a complete Xbox link, runtime behavior, or gameplay validation. Exact byte passes and Package Hub approval remain separate evidence gates.

The remaining queue stays ordered by baseline score and dependency group. Resume with the next unreviewed entry after the already timeboxed `sub_00033C70` and the reviewed dependency groups.
