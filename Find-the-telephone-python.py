def convertir(c):
    r=str("")
    for H in c:
        x=H
        if(x=='A' or x=='B' or x=='C'):
            r=str(r+'2')
        elif(x=='1'):
            r=str(r+"1")
        elif(x=='-'):
            r=str(r+"-")
        elif(x=='D' or x=='E' or x=='F'):
            r=str(r+'3')
        elif(x=='G' or x=='H' or x=='I'):
            r=str(r+'4')
        elif(x=='J' or x=='K' or x=='L'):
            r=str(r+'5')
        elif(x=='M' or x=='N' or x=='O'):
            r=str(r+'6')
        elif(x=='P' or x=='Q' or x=='R' or x=='S'):
            r=str(r+'7')
        elif(x=='T' or x=='U' or x=='V'):
            r=str(r+'8')
        elif(x=='W' or x=='X' or x=='Y' or 'Z'):
            r=str(r+'9')
        
    print(r)
c=str(input())
convertir(c)