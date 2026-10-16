# Progress report and dashboard

The former [decomp.dev project page](https://decomp.dev/soldieg/ReBLACK-XBOX) displayed the project's objdiff snapshot. The repository now keeps the same kind of candidate-level size map locally and publishes it through GitHub Pages; viewing the new dashboard does not contact decomp.dev.

## Current report snapshot

- Scope: **13,676 XboxRecomp split candidates** and **2,297,156 candidate code bytes**. This is an incomplete split-candidate inventory, not a complete linked-unit list or a whole-game denominator.
- objdiff: **406 exact bytes**, **47 exact functions**, **0.017674029% exact code** (shown as **0.02%**), and **0.21520935% fuzzy match**.
- Candidate map: **47 exact**, **74 fuzzy-only**, and **13,555 with no match recorded** in this report.
- These figures describe objdiff matches. They are separate from the local function reconstruction tracker, static review, compile status, Xbox link, runtime observation, and visible gameplay.

## Update flow

1. Prepare and review the sanitized objdiff v2 report and its matching `tools/decompdev/inventory-approval.json` record. Do not add XBE files, assets, C reconstructions, objects, or local evidence.
2. Run `python tools/decompdev/build_dashboard.py`. This checks the approved report hash and scope, refreshes `docs/assets/progress.svg`, and builds a local preview under `build/pages`.
3. Commit the report, approval record, and generated badge together. GitHub Actions validates the report, checks that the badge matches, and publishes the static Pages site from that commit.

For a local preview, run `python -m http.server 8000 --directory build/pages` after the generator, then open `http://localhost:8000`; opening `docs/index.html` directly will not load its JSON data. The page is a commit-driven snapshot, not a live activity feed. If Pages is not configured for this repository, set the repository's Pages build source to **GitHub Actions** before the deployment step can publish.

The former report workflow and dated analysis notes are preserved in [the decomp.dev history archive](docs/DECOMP_DEV_HISTORY.md). The current workflow publishes the local dashboard through GitHub Pages; it does not upload to decomp.dev.
