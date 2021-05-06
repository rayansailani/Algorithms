def ifPrime(number):
    a = [x for x in range(number)]
    limit = int(sqrt(number))
    for p in range(2,limit+1):
        if(a[p] != 0):
            i = p**2
            while i<number:
                a[i] = 0
                i = i + p    
    print([x for x in a if x!=0])
ifPrime(100)
        
    
