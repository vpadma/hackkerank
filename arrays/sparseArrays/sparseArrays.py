# Enter your code here. Read input from STDIN. Print output to STDOUT

N = raw_input()
N = int(N)
strings = dict()

for i in xrange(N):
    curr_string = raw_input()
    if strings.get(curr_string) is None:
        strings[curr_string] = 1
    else:
        strings[curr_string] += 1
    
Q = raw_input()
Q = int(Q)

for i in xrange(Q):
    curr_string = raw_input()
    if strings.get(curr_string) is None:
        print 0
    else:
        print strings.get(curr_string)