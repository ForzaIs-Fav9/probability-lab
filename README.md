# Probability Lab

A computational exploration of probability using discrete sample spaces, event abstractions, and conditional probability systems.

---

## Overview

This repository is designed to study probability not just as formulas, but as **computable systems**.

Instead of memorizing results, we:
- Explicitly construct sample spaces
- Define events as functions
- Compute probabilities programmatically

This approach turns probability into something **verifiable, extensible, and scalable**.

---

## Motivation

Traditional probability problems (like dice experiments) are often solved manually.

This project reframes them as:
> **deterministic computations over structured spaces**

The goal is to build intuition through:
- Enumeration
- Abstraction
- Computation

---

## Example: Conditional Probability (Two Dice)

We compute:

- **Event A:** both dice show 4 → `(4, 4)`
- **Event B:** at least one die shows 4

Then:

$$P(A \mid B) = \frac{P(A \cap B)}{P(B)} = \frac{1}{11}$$

This result is verified using code.

---

## Project Structure

```
probability-lab/
│
├── src/
│   ├── sample_space.py      # Generates outcome spaces
│   ├── events.py            # Defines events as functions
│   └── probability.py       # Computes probabilities
│
├── experiments/
│   └── dice_conditional.py  # Example experiment
│
└── README.md
```

---

## Core Concepts

### 1. Sample Space
All possible outcomes of an experiment.

### 2. Event
A condition applied to outcomes.

```python
def event_B(outcome):
    return 4 in outcome
```

### 3. Conditional Probability
Restricted probability given an event:

$$P(A \mid B) = \frac{|A \cap B|}{|B|}$$

---

## Running the Example

```bash
python experiments/dice_conditional.py
```

Expected output:

```
P(A|B) = 0.0909090909
```

---

## Future Extensions

This repository is designed to grow into a broader probability framework:

- Generalized n-dice systems
- Monte Carlo simulations
- Bayes' theorem implementations
- Markov chains
- Applications to learning optimization

---

## Philosophy

> Small problems are not small if you build systems around them.

This repository treats even basic probability experiments as foundations for deeper computational thinking.

---

## License

MIT License
