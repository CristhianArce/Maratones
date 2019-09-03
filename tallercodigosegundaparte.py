class Estudiante: 
    def __init__ (self, nombre, apellido, edad, codigo, semestre, cedula, carrera, direccion, celular): 
        self.nombre=nombre 
        self.apellido=apellido 
        self.edad=edad 
        self.codigo=codigo 
        self.semestre=semestre 
        self.cedula=cedula 
        self.carrera=carrera 
        self.direccion=direccion 
        self.celular=celular
    def listaAlumno (self, listadoAlumno):

        listadoAlumno[self.codigo]=[self.nombre, self.apellido, self.edad, self.codigo,
                                    self.semestre, self.cedula, self.carrera, self.direccion, self.celular]
        #print (listadoAlumno)
        return listadoAlumno

    def mostrarCod(self):
        return self.cod        
class Nivel: 
    def __init__(self, t, q1,q2,ex): 
        self.t=t 
        self.q1=q1 
        self.q2=q2 
        self.ex=ex
    def listaNiv (self, listadoNiv, codigo):

        listadoNiv[codigo]=[self.t, self.q1, self.q2, self.ex]
        #print (listadoNiv)
        return listadoNiv
    def visualizar(self, listadoNiv1, listadoNiv2, listadoNiv3, listadoNiv4, listadoNiv5):
        print("Notas del Nivel 1: ")
        print(listadoNiv1)
        print("Notas del Nivel 2: ")
        print(listadoNiv2)
        print("Notas del Nivel 3: ")
        print(listadoNiv3)
        print("Notas del Nivel 4: ")
        print(listadoNiv4)
        print("Notas del Nivel 5: ")
        print(listadoNiv5)
    def cambiar(self, listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5,cod):
        l1=[]
        print("Elija el nivel que desea cambiar")
        print("1. Nivel 1")
        print("2. Nivel 2")
        print("3. Nivel 3")
        print("4. Nivel 4")
        print("5. Nivel 5")
        opc=input()
        print("Elija componente: ")
        print("1. Taller")
        print("2. Quiz 1")
        print("3. Quiz 2")
        print("4. Examen")
        notaCambio=input()
        nuevaNota=float(input("¿Que nota es?: "))
        if opc=="1":
            l1=listadoNiv1[cod]
            if notaCambio=="1":
                l1[0]=nuevaNota
                listadoNiv1[cod]=l1
            elif notaCambio=="2":
                l1[1]=nuevaNota
                listadoNiv1[cod]=l1
            elif notaCambio=="3":
                l1[2]=nuevaNota
                listadoNiv1[cod]=l1
            elif notaCambio=="4":
                l1[3]=nuevaNota
                listadoNiv1[cod]=l1
            print (listadoNiv1)
        elif opc=="2":
            l1=listadoNiv2[cod]
            if notaCambio=="1":
                l1[0]=nuevaNota
                listadoNiv2[cod]=l1
            elif notaCambio=="2":
                l1[1]=nuevaNota
                listadoNiv2[cod]=l1
            elif notaCambio=="3":
                l1[2]=nuevaNota
                listadoNiv2[cod]=l1
            elif notaCambio=="4":
                l1[3]=nuevaNota
                listadoNiv2[cod]=l1
            print (listadoNiv2)
        elif opc=="3":
            l1=listadoNiv3[cod]
            if notaCambio=="1":
                l1[0]=nuevaNota
                listadoNiv3[cod]=l1
            elif notaCambio=="2":
                l1[1]=nuevaNota
                listadoNiv3[cod]=l1
            elif notaCambio=="3":
                l1[2]=nuevaNota
                listadoNiv3[cod]=l1
            elif notaCambio=="4":
                l1[3]=nuevaNota
                listadoNiv3[cod]=l1
            print (listadoNiv3)
        elif opc=="4":
            l1=listadoNiv4[cod]
            if notaCambio=="1":
                l1[0]=nuevaNota
                listadoNiv4[cod]=l1
            elif notaCambio=="2":
                l1[1]=nuevaNota
                listadoNiv4[cod]=l1
            elif notaCambio=="3":
                l1[2]=nuevaNota
                listadoNiv4[cod]=l1
            elif notaCambio=="4":
                l1[3]=nuevaNota
                listadoNiv4[cod]=l1
            print (listadoNiv4)
        elif opc=="5":
            l1=listadoNiv5[cod]
            if notaCambio=="1":
                l1[0]=nuevaNota
                listadoNiv5[cod]=l1
            elif notaCambio=="2":
                l1[1]=nuevaNota
                listadoNiv5[cod]=l1
            elif notaCambio=="3":
                l1[2]=nuevaNota
                listadoNiv5[cod]=l1
            elif notaCambio=="4":
                l1[3]=nuevaNota
                listadoNiv5[cod]=l1
            print (listadoNiv5)
    def definitivaNivel(self, listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5,cod):
        n1=[]
        n2=[]
        n3=[]
        n4=[]
        n5=[]
        n1=listadoNiv1[cod]
        n2=listadoNiv2[cod]
        n3=listadoNiv3[cod]
        n4=listadoNiv4[cod]
        n5=listadoNiv5[cod]
      
        suma1=0.0
        for c in range (0,4):
            suma1 = n1[c]+ suma1
        print ("Definitiva del nivel 1: ")
        print (suma1/4)
        suma2=0.0
        for c in range (0,4):
            suma2 = n2[c]+ suma2
        print ("Definitiva del nivel 2: ")
        print (suma2/4)
        suma3=0.0
        for c in range (0,4):
            suma3 = n3[c]+ suma3
        print ("Definitiva del nivel 3: ")
        print (suma3/4)
        suma4=0.0
        for c in range (0,4):
            suma4 = n4[c]+ suma4
        print ("Definitiva del nivel 4: ")
        print (suma4/4)
        suma5=0.0
        for c in range (0,4):
            suma5 = n5[c]+ suma5
        print ("Definitiva del nivel 5: ")
        print (suma5/4)
        
        sumaTotal=((suma1/4)+(suma2/4)+(suma3/4)+(suma4/4)+(suma5/4))/5
        return sumaTotal
    def promedio(self, listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5,cod):
        n1=[]
        n2=[]
        n3=[]
        n4=[]
        n5=[]
        n1=listadoNiv1[cod]
        n2=listadoNiv2[cod]
        n3=listadoNiv3[cod]
        n4=listadoNiv4[cod]
        n5=listadoNiv5[cod]
    
        ptaller = (n1[0]+n2[0]+n3[0]+n4[0]+n5[0])/5
        pquiz1= (n1[1]+n2[1]+n3[1]+n4[1]+n5[1])/5
        pquiz2= (n1[2]+n2[2]+n3[2]+n4[2]+n5[2])/5
        pexamen= (n1[3]+n2[3]+n3[3]+n4[3]+n5[3])/5
        
        pquiz=(pquiz1+pquiz2)/2
        
        print("El promedio de los talleres es: ")
        print(ptaller)
        print("El promedio de los quices es: ")
        print(pquiz)
        print("El promedio de los examenes es: ")
        print(pexamen)
        
    def consulta(self, listadoAlumno, cod):
        estud=[]
        estud=listadoAlumno[cod]
        print ("Nombre: "+ estud[0])
        print ("Apellido: "+ estud[1])
        print ("Edad: "+ str(estud[2]))
        print ("Codigo: "+ estud[3])
        print ("Cedula: "+ estud[4])
        print ("Semestre: "+ estud[5])
        print ("Carrera: "+ estud[6])
        print ("Celular: "+ estud[7])
    
listadoAlumno={} 
listadoNiv1={} 
listadoNiv2={} 
listadoNiv3={} 
listadoNiv4={} 
listadoNiv5={} 
listaCod=[]
s="si" 
while s=="si": 
    nombre=input("Ingrese el nombre: ") 
    apellido=input("Ingrese el apellido: ") 
    edad=int(input("Ingrese la edad: ")) 
    codigo=input("Ingrese el codigo: ") 
    cedula=input("Ingrese la cedula: ") 
    semestre=input("Ingrese el semestre: ") 
    carrera=input("Ingrese la carrera: ") 
    direccion=input("Ingrese la direccion: ") 
    celular=input("Ingrese el celular: ") 
    alumno=Estudiante(nombre, apellido, edad, codigo,semestre, cedula, carrera, direccion, celular)
    listaCod.append(codigo)

    listadoAlumno=alumno.listaAlumno(listadoAlumno)
    print("----Nivel 1----")
    t=float(input("Taller: "))
    q1=float(input("Quiz 1: "))
    q2=float(input("Quiz 2: "))
    ex=float(input("Examen: "))
    nivNotas=Nivel(t,q1,q2,ex)

    listadoNiv1=nivNotas.listaNiv(listadoNiv1, codigo)
    print("----Nivel 2----")
    t=float(input("Taller: "))
    q1=float(input("Quiz 1: "))
    q2=float(input("Quiz 2: "))
    ex=float(input("Examen: "))
    nivNotas=Nivel(t,q1,q2,ex)

    listadoNiv2=nivNotas.listaNiv(listadoNiv2, codigo)
    print("----Nivel 3----")
    t=float(input("Taller: "))
    q1=float(input("Quiz 1: "))
    q2=float(input("Quiz 2: "))
    ex=float(input("Examen: "))
    nivNotas=Nivel(t,q1,q2,ex)

    listadoNiv3=nivNotas.listaNiv(listadoNiv3, codigo)
    print("----Nivel 4----")
    t=float(input("Taller: "))
    q1=float(input("Quiz 1: "))
    q2=float(input("Quiz 2: "))
    ex=float(input("Examen: "))
    nivNotas=Nivel(t,q1,q2,ex)

    listadoNiv4=nivNotas.listaNiv(listadoNiv4, codigo)
    print("----Nivel 5----")
    t=float(input("Taller: "))
    q1=float(input("Quiz 1: "))
    q2=float(input("Quiz 2: "))
    ex=float(input("Examen: "))
    nivNotas=Nivel(t,q1,q2,ex)

    listadoNiv5=nivNotas.listaNiv(listadoNiv5, codigo)

    s=input("¿Agregar otro estudiate? si/no: ")
print("----------Menu----------") 
print("1. Visualizar informacion de los niveles. ") 
print("2. Cambiar las notas de un nivel.") 
print("3. Calcular la nota definitiva de todos los niveles.")
print("4. Calcular la nota definitiva del curso.") 
print("5. Calcular la nota promedio para talleres, quieces y examenes.") 
print("6. Ver informacion de un estudiante.") 
opc=input()
if opc=="1":
    nivNotas.visualizar(listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5)
elif opc=="2": 
    hacer=0 
    while(hacer==0): 
        busqueda=input("Ingrese cod del estudiante al que desea cambiar notas: ") 
        if busqueda in listaCod:
            hacer=2
            nivNotas.cambiar(listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5, busqueda)
        else:
            print("No se encuentra este cod. Intntelo de nuevo")
            hacer=0
elif opc=="3":
    hacer=0
    
    while(hacer==0): 
        busqueda=input("Ingrese cod del estudiante al que desea consultar la definitiva por nivel: ") 
        if busqueda in listaCod:
            hacer=2
            nivNotas.definitivaNivel(listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5, busqueda)
        else:
            print("No se encuentra este cod. Intntelo de nuevo")
            hacer=0
elif opc=="4":
    hacer=0
    
    while(hacer==0): 
        busqueda=input("Ingrese cod del estudiante al que desea calcular definitiva del curso: ") 
        if busqueda in listaCod:
            hacer=2
            sumaTotal=nivNotas.definitivaNivel(listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5, busqueda)
            print("La definitiva de todo el curso es:")
            print(sumaTotal)
        else:
            print("No se encuentra este cod. Intntelo de nuevo")
            hacer=0
elif opc=="5":
    hacer=0
    
    while(hacer==0): 
        busqueda=input("Ingrese cod del estudiante al que desea calcular promedio de talleres, quices y examenes: ") 
        if busqueda in listaCod:
            hacer=2
            nivNotas.promedio(listadoNiv1,listadoNiv2,listadoNiv3,listadoNiv4,listadoNiv5, busqueda)
          
        else:
            print("No se encuentra este cod. Intntelo de nuevo")
            hacer=0
elif opc=="6":
    hacer=0
    
    while(hacer==0): 
        busqueda=input("Ingrese cod del estudiante que desea consultar: ") 
        if busqueda in listaCod:
            hacer=2
            nivNotas.consulta(listadoAlumno, busqueda)
          
        else:
            print("No se encuentra este cod. Intntelo de nuevo")
            hacer=0