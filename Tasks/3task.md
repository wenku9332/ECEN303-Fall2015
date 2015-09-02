# Generating Random Numbers

In [Python](https://www.python.org), the `random` module can be used to generate pseudo random numbers.
For most purposes, these numbers can be considered random.
For instance, `random.randrange(2)` produces random bits and `random.random()` returns a random floating point number in the range [0.0, 1.0).
Note that it is necessary to `import random` to use this module.

```python
import random

Cardinality = 2
NumberTrials = 1000

TrialSequence = []
for TrialIndex in range(0, NumberTrials):
    TrialSequence.append(random.randrange(Cardinality))
    #
    # EDIT
    #

EmpiricalDistribution = []
for OutcomeIndex in range(0, Cardinality):
    EmpiricalDistribution.append(TrialSequence.count(OutcomeIndex) / float(NumberTrials))
print EmpiricalDistribution
```

### Action Items

* __Create__: Pure Python Project at location `Students/GitHubID/` within local Git repository.
* __Run__: Code above.
* __Modify__: Code to produce biased binary coin flip that returns one with probability 0.75 and zero otherwise.
* __Save__: File `3task.py`.
* __Commit__: File to master repository using PyCharm, Git and GitHub.

