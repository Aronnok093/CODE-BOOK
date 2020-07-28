def checkIncreasingSequence(seq): #use string as a input ex:checkIncreasingSequence("1234")
    for previous, next in zip(seq[:-1],seq[1:]):
        if not previous < next:
            return False
        
    return True 
