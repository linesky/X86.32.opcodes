code="    value=0"
last=0
ttrue=True
files=input("file data name? ")
try:
    f1=open(files,"r")
    code=f1.read()
    f1.close()
except:
    aa=0
while ttrue:
    lines=input("values separete by ,? ")
    lines=lines.strip()
    if lines=="":
        ttrue=False
    else:
        sp=lines.split(",")
        s1=""
        m=0
        for c in range(len(sp)):
            
            
            s1="    #"+sp[c]+"\n"
            s4=s1+"    if value=="+sp[c]+":\n        values="+sp[c]+"0\n"
            
            code=code+s4

        print(code)
try:
    f1=open(files,"w")
    f1.write(code)
    f1.close()
except:
    print("error on write file")
            
            
        
         
    
