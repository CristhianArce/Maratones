from random import choice
import os
palabras=["CARRO","PERRO","GATO","PATO","COMPUTADORA"]
a=choice(palabras)
print("SI FALLAS 5 VECES PIERDES ")
for c in range (0,int(len(a))):
    print("   _   ",end="")
print("")
print("")
print("")
x=int(1)
letras=[]
progreso = []


for c in a:
    letras.append(c)
    progreso.append("")
    
while (x<=5):
    print("")
    print("")
    print("__________________________________________")
    print("!       Ingrese una letra: ",end="")
    le=input()
    print("!                                          !")
    D=le.upper()
    contador=int(0)
    for c in range(0,int(len(letras))):
        if(D==letras[c]):
            progreso[c]=D
            contador=contador+1  
    if(contador==0):
        x=x+1
    if(progreso==letras):
        print("!                                          !")
        print("!       ",progreso,"             ")
        print("!                                          !")
        print("")

        print("Felicitaciones, la palabra es: ",a)
        break
    os.system('clear')
    print("!       Te quedan ",6-x," intentos             !")
    print("!                                          !")
    print("!                                          !")
    print("!       ",progreso,"             ")
    print("__________________________________________")
    if(x>=6):
        print("")
        print("")

        print("Perdiste!")