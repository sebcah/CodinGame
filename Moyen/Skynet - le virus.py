import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

 # n: the total number of nodes in the level, including the gateways
 # l: the number of links
 # e: the number of exit gateways
n, l, e = [int(i) for i in raw_input().split()]

print >> sys.stderr, "noeuds:",n, "liens:",l, "nombre de passerelles:",e

noeuds = [0]*l
noeudexit = [[99]*l for _ in range(e)] # ne pas utiliser [[[99]*l]*e] qui dupliquera les valeurs

ei = [0]*e

for i in xrange(l):
     # n1: N1 and N2 defines a link between these nodes
    n1, n2 = [int(j) for j in raw_input().split()]
    noeuds[i]=[n1,n2]


print  >> sys.stderr, "n1-n2:", noeuds         
    
for i in xrange(e):
    ei[i] = int(raw_input()) # the index of a gateway node
print >> sys.stderr, "sortie(s) ei:",ei

for j in xrange(e):
    k=0
    for i in xrange(l):  
        if noeuds[i][0] == ei[j]:
            noeudexit[j][k] = noeuds[i][1]
            k = k+1
        if noeuds[i][1] == ei[j]:
            noeudexit[j][k] = noeuds[i][0]
            k= k+1
    del noeudexit[j][k:l]
    
print >> sys.stderr, "noeudexit:", noeudexit

presence = 0
i = 0    
# game loop
while 1:
    si = int(raw_input()) # The index of the node on which the Skynet agent is positioned this turn
    print >> sys.stderr, "skynet position: si",si
    # sipose = ei.index(si) # localise dans quel groupe de liens se trouve skynet
    
    # Example: 0 1 are the indices of the nodes you wish to sever the link between
    for j in xrange(e):
        if si in noeudexit[j] :
            presence = presence + 1
            groupe = j   
        else:
            presence = presence + 0
    
    if presence == 1:
        print >> sys.stderr, "si present noeudexit: ",ei[groupe], si
        print ei[groupe], si
    else:
        print >> sys.stderr, "si absent noeudexit: ",ei[j], noeudexit[j][i]
        print ei[j], noeudexit[j][i]
    presence = 0
    i = i + 1