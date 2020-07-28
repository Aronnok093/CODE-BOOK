def checkIncreasingSequence(seq):
    for previous, next in zip(seq[:-1],seq[1:]):
        if not previous < next:
            return False
        
    return True 
