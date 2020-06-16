N=int(input()) #x ranges from 1 to N
#print(num)
k=300
i=1
max=N
min=0
for i in range (0,k):
     if i==0:
         y=1
         print(y)
         character=input()
         if(character=='L'):
             s='evenlie'
         else:
             s='oddlie'
     elif s=='oddlie':
       y=int((max+min)/2)
       print(y)
       character=input()
       if(character=='E'):
          break
       elif(character=='G' and i%2==0):
          min=y
       elif(character=='L' and i%2==0):
          max=y
     elif s=='evenlie':
         y=int((max+min)/2)
         print(y)
         character=input()
         if(character=='E'):
           break
         elif(character=='G' and i%2!=0):
           min=y
         elif(character=='L' and i%2!=0):
           max=y
#print(y,"ans")    
