## Problem

Two dice are thrown.

- Event A: both dice show 4
- Event B: at least one die shows 4

Find the conditional probability P(A | B).

---

## Mathematical Solution

Total outcomes = 36

n(A) = 1 → (4,4)

n(B) = 11 → outcomes where at least one die is 4

n(A ∩ B) = 1

Therefore:

P(A | B) = n(A ∩ B) / n(B) = 1 / 11

---

## Computational Approach

This result is verified using a C++ program that:

- Enumerates all possible outcomes of two dice
- Applies event conditions using logical checks
- Counts occurrences of:
  - Event B
  - Event A ∩ B
- Computes conditional probability

---

## Output

n(B) = 11
n(A and B) = 1
P(A|B) = 1/11 = 0.0909091

---


## Why this project?

This project demonstrates how probability problems can be:

- Represented computationally
- Verified programmatically
- Understood through enumeration rather than memorization

---

## Future Work

- Generalize to n dice
- Add simulation (Monte Carlo)
- Support custom event definitions
