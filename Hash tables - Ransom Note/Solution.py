from collections import defaultdict

def checkMagazine(magazine, note):
    d = defaultdict(int)
    for word in magazine:
        d[word] += 1
    
    for word in note:
        if word not in d:
            print("No")
            return False
        d[word] -= 1
    
    if all([x>=0 for x in d.values()]):
        print("Yes")
        return True
    else:
        print("No")
        return False