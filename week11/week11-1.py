#week11-1.py 用py測要多大
def isPrime(n):
  for i in range(2,n):
    if n%i==0: return False
  return True
BOUND =300000
ans=0
for i in range(2,BOUND):
  if isPrime(i):
    print(i,end=' ') #單空格單
    ans +=1
print() 
print('質數有:',ans,'個') 