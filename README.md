# GSM-SIM-Auth-Research

## Purpose
This repository serves as a **technical reference and educational implementation** of the GSM SIM authentication process, specifically focusing on the **A3** and **A8** algorithms, used to perform subscriber authentication and session key derivation in legacy GSM systems.

> ⚠️ This code is intended for **educational and research purposes only**. It does **not contain real-world COMP128 code** but a simplified model for demonstration.

---

## Repository Overview

| Folder         | Content                                                                |
|----------------|------------------------------------------------------------------------|
| `/src`         | Source code for A3/A8 algorithms, SIM transactions, and main simulator |
| `/docs`        | Technical documentation, pinout, protocol analysis, security review    |
| `/tools`       | Utility scripts (APDU tester, RAND generator)                          |
| `/tests`       | Unit tests for key functions                                           |

---

## Quick Start

```bash
git clone https://github.com/webt3ch/GSM-SIM-Auth-Research.git
cd GSM-SIM-Auth-Research/src
make
./sim_auth_demo
