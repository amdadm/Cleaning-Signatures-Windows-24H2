#pragma once

// Kernel Bucket Hash Pattern (24H2)
#define KernelBucketHashPattern_24H2    "\x4C\x8D\x35\x00\x00\x00\x00\xE9"
#define KernelBucketHashMask_24H2    "xxx????x"

// PiDDB Lock Pattern (24H2)
#define PiDDBLockPattern_24H2    "\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x8B\xD3"
#define PiDDBLockMask_24H2    "xxx????x????xx"

// PiDDB Cache Table Pattern (24H2)
#define PiDDBCacheTablePattern_24H2    "\x48\x8D\x1D\x6F\x9B\x31\x00";
#define PiDDBCacheTableMask_24H2    "xxx????"

// MmUnloadedDrivers Pattern (24H2)
#define MmlPattern_24H2    "\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x74"
#define MmlMask_24H2    "xxx????xxxx"
