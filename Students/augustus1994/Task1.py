
import random

def bernoulli(p):
    
    x = random.random()
    
    if x < p: return 1
    
    else: return 0
