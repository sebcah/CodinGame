import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(raw_input())
print >> sys.stderr,"n:", n

# on cree la liste pi
pi = [0]*n 

for i in xrange(n):
    pi [i] = int(raw_input())

# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."

pi = sorted(pi)
print >> sys.stderr,"pi sorted :",pi
lowdelta = 10000000

for i in xrange(n-1):
    delta = abs(pi [i] - pi[i+1])
    print >> sys.stderr,"delta:", delta
    if delta < lowdelta :
        lowdelta = delta
    
    print >> sys.stderr,"mini:", lowdelta
        
print lowdelta