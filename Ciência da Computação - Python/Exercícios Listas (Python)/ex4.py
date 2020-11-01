def minMax(l,i=0,ma=0,me=10):
    if i < len(l):
        if l[i]> ma :
            return minMax(l,i+1,l[i],me)
        elif l[i]< me:
            return minMax(l,i+1,ma,l[i])
        else:
            return minMax(l,i+1,ma,me)
    else:
        return ma,me
minMax([1, 2, 3])
