n = input()
##ÀÌºĞÅ½»ö
st=1
en=int(n/2+1)
while st<=en:
    mid = (st+en)/2
    if mid*mid ==n:
        print mid
        break
    elif mid*mid <n:
        st = mid+1
    else:
        en = mid-1


