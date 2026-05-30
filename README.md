<div align="center">

# Strange Particle Production in Pb-Pb Collisions at √s_NN = 5.02 TeV

### A PYTHIA8 Monte Carlo Study — MPhil Physics

[![ROOT](https://img.shields.io/badge/ROOT-6.x-blue?style=for-the-badge&logo=root)](https://root.cern/)
[![PYTHIA](https://img.shields.io/badge/PYTHIA-8.x-green?style=for-the-badge)](https://pythia.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-orange?style=for-the-badge&logo=cplusplus)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey?style=for-the-badge&logo=linux)](https://root.cern/install/)

</div>

---

## Table of Contents

- [Overview](#overview)
- [Physics Motivation](#physics-motivation)
- [Simulation Setup](#simulation-setup)
- [Results](#results)
- [How to Run](#how-to-run)
- [Repository Structure](#repository-structure)
- [Tools & Environment](#tools--environment)
- [Academic Context](#academic-context)
- [References](#references)
- [License](#license)

---

## Overview

This repository presents the results of my **MPhil research project** on the production of strange particles — **K⁰ₛ (K-short)**, **Λ (Lambda)**, and **Ξ (Xi)** — in Pb-Pb collisions at a centre-of-mass energy per nucleon pair of **√s_NN = 5.02 TeV**, simulated using the **PYTHIA8** Monte Carlo event generator.

Strange particle production is a key observable in ultra-relativistic heavy-ion collisions. Enhanced strangeness production relative to pp collisions has long been proposed as a signature of **Quark-Gluon Plasma (QGP)** formation. This study systematically characterises K⁰ₛ, Λ, and Ξ using PYTHIA8 simulations, providing a **perturbative QCD Monte Carlo baseline** for comparison with experimental data from the **ALICE detector** at the **LHC (CERN)**.

---

## Physics Motivation

At extreme temperatures (~155 MeV) and energy densities (~1 GeV/fm³), nuclear matter undergoes a phase transition to a **Quark-Gluon Plasma (QGP)** — a deconfined state of quarks and gluons. Ultra-relativistic Pb-Pb collisions at the LHC recreate these conditions momentarily.

| Particle | Quark Content | Strangeness \|S\| | Mass (GeV/c²) | Decay Channel |
|----------|--------------|-------------------|---------------|---------------|
| K⁰ₛ      | (ds̄ − sd̄)/√2 | 1 | 0.498 | K⁰ₛ → π⁺ + π⁻ |
| Λ        | uds           | 1 | 1.116 | Λ → p + π⁻    |
| Ξ⁻       | dss           | 2 | 1.322 | Ξ⁻ → Λ + π⁻   |

**Why strange particles?**
- Strange quarks are **absent in initial-state nucleons** — production is entirely dynamic
- Multi-strange baryons (Ξ) show the **strongest strangeness enhancement** in central collisions
- The mass ordering of ⟨pT⟩ is a direct probe of **collective radial flow** of the fireball
- PYTHIA8 provides the **pQCD baseline** without QGP effects for direct comparison with ALICE data

---

## Simulation Setup

| Parameter | Value |
|-----------|-------|
| Collision System | Pb-Pb |
| Centre-of-mass Energy | √s_NN = 5.02 TeV |
| Event Generator | PYTHIA 8 |
| Rapidity Acceptance | \|y\| < 0.5 (mid-rapidity) |
| Centrality Classes | 0–5%, 30–40%, 60–80% |
| Analysis Framework | CERN ROOT 6.x |
| Language | C++ |

**Centrality Definition:**
- **0–5%**: Most central (head-on collisions, maximum nuclear overlap)
- **30–40%**: Semi-central collisions
- **60–80%**: Peripheral (grazing collisions, minimum overlap)

**Particle Reconstruction via Decay Topology:**
- K⁰ₛ and Λ reconstructed via **V0 topology** (secondary vertex)
- Ξ reconstructed via **cascade topology** (V0 + bachelor pion)

---

## Results

All histograms were generated using **ROOT** and are provided as standalone `.C` macros and `.root` files that can be run independently without the original simulation code.

---

### 1. Pseudorapidity (η) Distributions

> Mean charged particle multiplicity density ⟨dN_ch/dη⟩ as a function of pseudorapidity η
> for three centrality classes: 0–5% (central), 30–40% (semi-central), and 60–80% (peripheral)
> Pb-Pb collisions at √s_NN = 5.02 TeV. The characteristic bell-shaped distribution centered
> at η = 0 and the strong centrality ordering — central collisions producing ~2000 particles
> at mid-rapidity vs ~50 in peripheral — are fully consistent with participant nucleon scaling.

![Pseudorapidity Distributions](results/pseudorapidity_distribution.png)

---

### 2. Lorentz-Invariant Transverse Momentum (pT) Spectra

> Lorentz-invariant transverse momentum spectra (1/2πpT) d²N/dpTdy of K⁰ₛ, Λ+Λ̄, and Ξ⁻+Ξ̄⁺
> at mid-rapidity |y| < 0.5 in Pb-Pb collisions at √s_NN = 5.02 TeV, for two centrality classes:
> 0–5% (scaled ×20 for visual separation) and 30–40%. Yields span several orders of magnitude on
> a logarithmic scale. The strangeness hierarchy K⁰ₛ > Λ > Ξ is clearly visible across all pT,
> consistent with increasing strange quark content suppressing production rates.

![pT Spectra](results/pt_spectra_invariant.png)

---

### 3. Mean Transverse Momentum vs Centrality

> Mean transverse momentum ⟨pT⟩ of K⁰ₛ, Λ+Λ̄, and Ξ⁻+Ξ̄⁺ as a function of collision
> centrality (0–80%) at mid-rapidity |y| < 0.5 in Pb-Pb collisions at √s_NN = 5.02 TeV.
> The mass ordering ⟨pT⟩(Ξ) > ⟨pT⟩(Λ) > ⟨pT⟩(K⁰ₛ) is clearly observed across all
> centralities, consistent with radial flow boosting heavier particles to higher momenta.
> A mild decrease in ⟨pT⟩ from central to peripheral collisions reflects the reduction
> of collective radial flow strength in less central events.

![Mean pT vs Centrality](results/mean_pt_vs_centrality.png)

---

### 4. Mean Transverse Momentum vs Particle Mass — Radial Flow Signature

> Mean transverse momentum ⟨pT⟩ as a function of particle rest mass m for K⁰ₛ, Λ, and Ξ
> in Pb-Pb collisions at √s_NN = 5.02 TeV. Colored circles show PYTHIA8 simulation results;
> grey triangles show a reference dataset for comparison. The linear rise of ⟨pT⟩ with
> particle mass is a direct signature of collective radial flow: ⟨pT⟩ ≈ m⟨βT⟩, where ⟨βT⟩
> is the mean transverse flow velocity. All particles share a common velocity boost from
> the hydrodynamically expanding fireball, with heavier species (Ξ) acquiring
> proportionally larger momenta.

![Mean pT vs Mass](results/mean_pt_vs_mass_radialflow.png)

---

## How to Run

### Prerequisites

- [ROOT](https://root.cern/install/) version 6.x (required)
- No additional dependencies — all `.C` macros are fully self-contained
- Compatible with Linux, macOS

---

### Running the ROOT Macros (.C files)

```bash
# Method 1 — Batch mode, no GUI (recommended for quick output)
root -b -q results/pseudorapidity_distribution.C
root -b -q results/pt_spectra_invariant.C
root -b -q results/mean_pt_vs_centrality.C
root -b -q results/mean_pt_vs_mass_radialflow.C

# Method 2 — Interactive mode (opens canvas window)
root results/pseudorapidity_distribution.C
root results/pt_spectra_invariant.C
root results/mean_pt_vs_centrality.C
root results/mean_pt_vs_mass_radialflow.C

# Method 3 — Inside the ROOT prompt
root -l
root [0] .L results/pseudorapidity_distribution.C
root [1] pseudorapidity_distribution()

# Method 4 — Run all four macros at once
for f in results/*.C; do root -b -q "$f"; done
```

---

### Opening the ROOT Files (.root files)

```bash
# Open a .root file interactively
root -l results/pseudorapidity_distribution.root

# Inside the ROOT prompt — list all objects in the file
root [0] .ls

# Browse file contents visually (ROOT file browser)
root [1] new TBrowser()

# Draw a histogram directly by name
root [2] _file0->ls()
root [3] histName->Draw()          // replace histName with actual histogram name

# Draw with options (e.g. error bars, log scale)
root [4] histName->Draw("E")       // with error bars
root [5] gPad->SetLogy(1)          // set log scale on Y axis

# Save canvas to PNG from ROOT prompt
root [6] c1->SaveAs("output.png")
```

---

### Checking ROOT Version

```bash
root --version
```

---

## Repository Structure

```
strange-particle-production-PbPb-5TeV/
│
├── README.md                              ← Project documentation (this file)
├── LICENSE                                ← MIT License
│
└── results/
    ├── pseudorapidity_distribution.C      ← ROOT macro: η distributions
    ├── pseudorapidity_distribution.root   ← ROOT file: η distributions
    ├── pseudorapidity_distribution.png    ← Output plot: η distributions
    │
    ├── pt_spectra_invariant.C             ← ROOT macro: pT spectra
    ├── pt_spectra_invariant.root          ← ROOT file: pT spectra
    ├── pt_spectra_invariant.png           ← Output plot: pT spectra
    │
    ├── mean_pt_vs_centrality.C            ← ROOT macro: ⟨pT⟩ vs centrality
    ├── mean_pt_vs_centrality.root         ← ROOT file: ⟨pT⟩ vs centrality
    ├── mean_pt_vs_centrality.png          ← Output plot: ⟨pT⟩ vs centrality
    │
    ├── mean_pt_vs_mass_radialflow.C       ← ROOT macro: ⟨pT⟩ vs mass
    ├── mean_pt_vs_mass_radialflow.root    ← ROOT file: ⟨pT⟩ vs mass
    └── mean_pt_vs_mass_radialflow.png     ← Output plot: ⟨pT⟩ vs mass
```

---

## Tools & Environment

| Tool | Version | Purpose |
|------|---------|---------|
| **PYTHIA 8** | 8.x | Monte Carlo event generation for Pb-Pb collisions |
| **ROOT (CERN)** | 6.x | Data analysis, histogram filling, and visualisation |
| **C++** | C++11/14 | Simulation and analysis code |
| **Linux** | Ubuntu | Operating system |
| **TeXstudio** | — | LaTeX presentation compilation |

---

## Academic Context

| | |
|--|--|
| **Degree** | Master of Philosophy (MPhil) in Physics |
| **Research Topic** | Study of Strange Particles (K⁰ₛ, Λ, Ξ) Production in Pb-Pb Collisions at √s_NN = 5.02 TeV using PYTHIA8 |
| **Relevant Experiment** | [ALICE (A Large Ion Collider Experiment)](https://alice.cern/), CERN LHC |
| **Research Area** | High Energy Physics (HEP) — Heavy-Ion Physics |

---

## References

1. T. Sjöstrand *et al.*, *An introduction to PYTHIA 8.2*, Comput. Phys. Commun. **191** (2015) 159–177. [doi:10.1016/j.cpc.2015.01.024](https://doi.org/10.1016/j.cpc.2015.01.024)

2. ALICE Collaboration, *Enhanced production of multi-strange hadrons in high-multiplicity proton-proton collisions*, Nature Physics **13** (2017) 535–542. [doi:10.1038/nphys4111](https://doi.org/10.1038/nphys4111)

3. ALICE Collaboration, *Multiplicity dependence of (multi-)strange hadron production in proton-proton collisions at √s = 7 TeV*, Eur. Phys. J. C **80** (2020) 167. [doi:10.1140/epjc/s10052-020-7673-8](https://doi.org/10.1140/epjc/s10052-020-7673-8)

4. R. Brun and F. Rademakers, *ROOT — An object oriented data analysis framework*, Nucl. Instrum. Meth. A **389** (1997) 81–86. [doi:10.1016/S0168-9002(97)00048-X](https://doi.org/10.1016/S0168-9002(97)00048-X)

---

## License

This project is licensed under the **MIT License** — see the [LICENSE](LICENSE) file for details.

---

<div align="center">

**Muhammad Zeeshan** — MPhil Physics
[![GitHub](https://img.shields.io/badge/GitHub-Muhammad--Zeeshan--HEP-black?style=flat&logo=github)](https://github.com/Muhammad-Zeeshan-HEP)

</div>
