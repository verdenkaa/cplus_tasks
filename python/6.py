f = open("C:/gits/cplus_tasks/python/text.txt", 'r')
a = list(map(lambda x: str(x).rstrip(), f.readlines()))
f.close()

tmax = a.index(max(a))
tmin = a.index(min(a))
a[tmax], a[tmin] = min(a), max(a)

f = open("C:/gits/cplus_tasks/python/text.txt", 'w')
f.write("\n".join(a))
f.close()