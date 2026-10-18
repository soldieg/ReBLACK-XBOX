# Progress report and dashboard

The former [decomp.dev project page](https://decomp.dev/soldieg/ReBLACK-XBOX) displayed the project's objdiff snapshot. The repository now keeps the same kind of candidate-level size map locally and publishes it through GitHub Pages; viewing the new dashboard does not contact decomp.dev.

## Current report snapshot

- Scope: **13,676 XboxRecomp split candidates** and **2,297,156 candidate code bytes**. This is an incomplete split-candidate inventory, not a complete linked-unit list or a whole-game denominator.
- objdiff: **811 exact bytes**, **63 exact functions**, **0.035304524% exact code** (shown as **0.04%**), and **0.66778016% fuzzy match**.
- Candidate map: **63 exact**, **268 fuzzy-only**, and **13,345 with no match recorded** in this report.
- The current report compares 401 compiled current C objects to 13,676 XboxRecomp split candidate objects using objdiff 3.8.2; 15 current C sources failed host compilation and are absent as base objects. Of those compiled sources, 63 are exact, 268 fuzzy-only, and 70 have no match. These figures describe candidate-level objdiff matches, not complete linked functions, Xbox linking, runtime behavior, or visible gameplay. The private validation queue records the per-source outcomes.

## Update flow

1. Prepare and review the sanitized objdiff v2 report and its matching `tools/decompdev/inventory-approval.json` record. Do not add XBE files, assets, C reconstructions, objects, or local evidence.
2. Run `python tools/decompdev/build_dashboard.py`. This checks the approved report hash and scope, validates the sanitized exactification queue, refreshes `docs/assets/progress.svg`, and builds a local preview under `build/pages`.
3. Commit the reviewed report inputs and generated badge when the objdiff snapshot changes. For an exactification-only refresh, commit the sanitized `docs/data/exactification-functions.json`, dashboard card, and queue summary; this does not change the objdiff report or its percentage. GitHub Actions validates the applicable inputs and publishes the static Pages site from that commit.

For a local preview, run `python -m http.server 8000 --directory build/pages` after the generator, then open `http://localhost:8000`; opening `docs/index.html` directly will not load its JSON data. The page is a commit-driven snapshot, not a live activity feed. If Pages is not configured for this repository, set the repository's Pages build source to **GitHub Actions** before the deployment step can publish.

The former report workflow and dated analysis notes are preserved in [the decomp.dev history archive](docs/DECOMP_DEV_HISTORY.md). The current workflow publishes the local dashboard through GitHub Pages; it does not upload to decomp.dev.
