import sys
#fil=open("test.txt")
#for line in fil:
for line in sys.stdin:
    if(line.strip()=='#'):
        break
    quicksum=0
    for i in range(len(line)):
        if(line[i]!=' ' and ord(line[i])>=65):
            quicksum=quicksum+((i+1)*(ord(line[i])-64))
    
    print(quicksum)