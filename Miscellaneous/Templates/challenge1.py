__author__ = ""
__NetID__ = ""
__GitHubID__ = ""
__challenge__ = "1"
__version__ = "0.0"
__grader__ = ""
__SelfGrade__ = ""
__PeerGrade__ = ""

"""
Random Signals and Systems
Course: ECEN 303-502
Maximum Grade: 5pt
"""

import random
import math

NumberTrials = 100000
Trials = []

def biasedcoinflip():
    # Create method for biased coin flip

for TrialIndex in range(0, NumberTrials):
    Trials.append(biasedcoinflip())

TrialAverage = sum(Trials)/(1.0*len(Trials))
print 'The average number of ones is {0:.4f}.'.format(TrialAverage)

SumTrials = []

for TrialIndex in range(0, NumberTrials):
    # Add five coin flips for each SumTrials outcome

Distribution = []
for OutcomeIndex in range(0,6):
    Distribution.append(SumTrials.count(OutcomeIndex))

print repr(Distribution)

