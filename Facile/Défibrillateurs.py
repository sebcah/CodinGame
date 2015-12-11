import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

lon = raw_input()
lat = raw_input()
n = int(raw_input())

lon = float(lon.replace(',','.')) #remplace 3,5 en 3.5 et le string en float
lat = float(lat.replace(',','.'))
print >> sys.stderr, "LON:", lon
print >> sys.stderr, "LAT:", lat
print >> sys.stderr, "n:", n, "\n"

d0 = 10000

for i in xrange(n):
    
    defib = raw_input()
    #print >> sys.stderr, "Defib",i, ":\n", defib
    defibsplit = defib.split(';')
    defibNOM = defibsplit[1]
    defibLON = defibsplit[4]
    defibLAT = defibsplit[5]
    
    defibLON = float(defibLON.replace(',','.'))
    defibLAT = float(defibLAT.replace(',','.'))
    
    print >> sys.stderr, defibNOM
    #print >> sys.stderr, defibLON
    #print >> sys.stderr, defibLAT
    
    x = (defibLON - lon) * math.cos((defibLON + lon)/2)
    y = (defibLAT - lat)
    d = math.sqrt(x*x+y*y)
    
    #print >> sys.stderr, "x=",x 
    #print >> sys.stderr, "y=",y
    print >> sys.stderr, "d=",d, "\n"
    
    if d < d0:
        defibPROCHE = defibNOM
        d0 = d
       
# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."

print defibPROCHE