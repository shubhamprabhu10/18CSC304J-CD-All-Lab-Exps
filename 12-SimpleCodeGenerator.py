n=[]
di={'+':'ADD','-':'SUB','*':'MUL','/':'DIV'}
while True:
    n.append(input())
    if(n[-1]=="exit"):
        n.pop(-1)
        break
j=0
for i in n:
    op=di[i[3]]
    print("MOV",i[2],",R",str(j))
    print(op,i[4],",R",str(j))
    print("MOV R",str(j),",",i[0])
    j+=1
