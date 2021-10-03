def openLocks(locks, student):
    if student < 0 or locks < 0:
        return None

    counter = 0
    for i in range (locks , 0 , -1):
        divisors = numberOfDivisor(i, student)
        if divisors % 2 != 0:
            counter += 1
    return counter


def numberOfDivisor(x, student):
    counter = 0
    for i in range (x , 0 , -1):
        if x % i == 0 :
            if i <= student:
                counter +=1
    return counter
 

def mostTouchableLocker(locks, student):


    if student == 0 or locks == 0:
        return 0
    
    if student < 0 or locks < 0:
        return None
    lockerTouched = 1
    lockerNumber = locks
    for i in range (locks , 0 , -1):
        divisors = numberOfDivisor(i, student)
        if divisors > lockerTouched:
            lockerNumber = i
            lockerTouched = divisors
    return lockerNumber

if __name__ == "__main__":
    print(openLocks(100, 100))
    print(mostTouchableLocker(72, 100))

    # print(openLocks(10000, 1000))
    print(mostTouchableLocker(10000, 1000))