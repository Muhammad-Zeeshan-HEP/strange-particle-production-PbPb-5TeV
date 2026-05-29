# Strange Particle Production in Pb-Pb Collisions at √s_NN = 5.02 TeV
### A PYTHIA8 Monte Carlo Study — MPhil Physics

[![ROOT](https://img.shields.io/badge/ROOT-6.x-blue)](https://root.cern/) [![PYTHIA](https://img.shields.io/badge/PYTHIA-8.x-green)](https://pythia.org/) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

---

## Overview

This repository presents the results of my **MPhil research project** on the production of strange particles — **K⁰ₛ (K-short)**, **Λ (Lambda)**, and **Ξ (Xi)** — in Pb-Pb collisions at a centre-of-mass energy per nucleon pair of **√s_NN = 5.02 TeV**, simulated using the **PYTHIA8** Monte Carlo event generator.

Strange particle production is a key observable in ultra-relativistic heavy-ion collisions. Enhanced strangeness production relative to pp collisions has long been proposed as a signature of **Quark-Gluon Plasma (QGP)** formation. This study systematically characterises K⁰ₛ, Λ, and Ξ using PYTHIA8 simulations, providing a Monte Carlo baseline for comparison with experimental data from the **ALICE detector** at the **LHC (CERN)**.

---

## Physics Motivation

| Particle | Quark Content | Strangeness |
|----------|--------------|-------------|
| K⁰ₛ      | (d s̄ − s d̄)/√2 | \|S\| = 1 |
| Λ        | uds           | \|S\| = 1 |
| Ξ⁻       | dss           | \|S\| = 2 |

- Strange quarks are not present in the initial-state nucleons, so strangeness must be **produced dynamically** in the collision.
- Multi-strange baryons (Ξ) are particularly sensitive probes of the medium formed in heavy-ion collisions.
- PYTHIA8 simulations serve as an important **perturbative QCD baseline** against which experimental measurements are benchmarked.

---

## Results

All histograms were generated using **ROOT** and are provided as standalone `.C` macros that can be run independently without the original simulation code.

### 1. Invariant Mass Peaks

> Reconstructed invariant mass distributions for K⁰ₛ, Λ, and Ξ, showing clear signal peaks above combinatorial background — confirming successful particle identification via their decay topology (V0 and cascade reconstruction).

![Invariant Mass](results/invariant_mass.png)

---

### 2. Transverse Momentum (pT) Spectra

> Differential yield dN/dp_T as a function of transverse momentum for K⁰ₛ, Λ, and Ξ. The spectra characterise the transverse dynamics of strange particle production and can be compared to Boltzmann-Gibbs blast-wave fits.

![pT Spectra](results/pt_spectra.png)

---

### 3. Rapidity Distributions

> Particle yields as a function of rapidity y, showing the longitudinal production profile of strange hadrons across the detector acceptance. Mid-rapidity (|y| < 0.5) is the primary region of interest, consistent with the ALICE acceptance.

![Rapidity Distributions](results/rapidity_distributions.png)

---

### 4. Multiplicity Distributions

> Event-by-event charged particle multiplicity distributions, used to characterise collision centrality. Strange particle yields are studied as a function of multiplicity to probe the dependence of strangeness enhancement on event activity.

![Multiplicity](results/multiplicity.png)

---

## How to Run

### Prerequisites
- [ROOT](https://root.cern/install/) (version 6.x recommended)
- No additional dependencies — the `.C` files are self-contained

### Running a Macro

```bash
# Launch ROOT and run any macro interactively
root results/invariant_mass.C

# Or run in batch mode (no GUI)
root -b -q results/invariant_mass.C
```

### All Four Results

```bash
root -b -q results/invariant_mass.C
root -b -q results/pt_spectra.C
root -b -q results/rapidity_distributions.C
root -b -q results/multiplicity.C
```

---

## Repository Structure

```
.
├── README.md
├── LICENSE
└── results/
    ├── invariant_mass.C
    ├── invariant_mass.png
    ├── pt_spectra.C
    ├── pt_spectra.png
    ├── rapidity_distributions.C
    ├── rapidity_distributions.png
    ├── multiplicity.C
    └── multiplicity.png
```

---

## Tools & Environment

| Tool | Purpose |
|------|---------|
| **PYTHIA 8** | Monte Carlo event generation for Pb-Pb collisions at 5.02 TeV |
| **ROOT (CERN)** | Data analysis, histogram filling, and visualisation |
| **C++** | Simulation and analysis code |

---

## Academic Context

- **Degree:** Master of Philosophy (MPhil) in Physics
- **Topic:** Study of Strange Particles (K⁰ₛ, Λ, Ξ) Production in Pb-Pb Collisions at √s_NN = 5.02 TeV using PYTHIA8
- **Relevant Experiment:** [ALICE (A Large Ion Collider Experiment)](https://alice.cern/), CERN LHC

---

## References

1. T. Sjöstrand et al., *PYTHIA 8.2*, Comput. Phys. Commun. 191 (2015) 159–177
2. ALICE Collaboration, *Enhanced production of multi-strange hadrons in high-multiplicity proton-proton collisions*, Nature Physics 13 (2017) 535–542
3. ALICE Collaboration, *Multiplicity dependence of (multi-)strange hadron production in proton-proton collisions*, Eur. Phys. J. C 80 (2020) 167

---

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.
