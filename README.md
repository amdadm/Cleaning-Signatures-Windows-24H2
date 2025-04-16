# Cleaning Signatures Windows 24H2

This repository contains a custom set of **memory cleaning signatures** specifically tailored for **Windows 11 24H2 (kernel-level)**.

All patterns were manually extracted by me through static analysis using **IDA** on the `ntoskrnl.exe` binary from the 24H2 build.  
The goal is to provide updated offsets and signatures for locating and cleaning kernel structures in memory, especially in research and lab scenarios.

These signatures target key system components commonly used by anti-forensics or cleaning tools:

- **Cache Buckets**
- **PiDDB Cache Table & Lock**
- **MmUnloadedDrivers**

They are useful for:

- Kernel reverse engineering
- Memory cleanup after driver loading
- Research and forensic experimentation
- Updating tools for compatibility with 24H2

---

## Signatures Included

- **Kernel Bucket Hash Pattern**  
- **PiDDB Lock Pattern**  
- **PiDDB Cache Table Pattern**  
- **MmUnloadedDrivers Pattern**

Each pattern includes a corresponding mask and is verified against the 24H2 release.

---

## Disclaimer

This project is for **educational and research purposes only**.  
I do **not** condone or support malicious use of this information.  
Use responsibly, in controlled environments, and at your own risk.

---
