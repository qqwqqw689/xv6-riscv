// Mutual exclusion lock.
struct spinlock {
  uint locked;       // Is the lock held?
  // zero -> the lock is available.
  // non-zero -> the lock is not available.

  // For debugging:
  char *name;        // Name of lock.
  struct cpu *cpu;   // The cpu holding the lock.
};

