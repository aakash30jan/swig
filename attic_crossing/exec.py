import os,sys
#print sys.argv[1]

c1 = "swig -scilab" + "  " + sys.argv[1] + ".i" 
c2 = "gcc -fPIC -c -I/usr/local/include/scilab" + " " + sys.argv[1] + "_wrap.c" + " attic_crossing.c "
c3 = "gcc -shared" + " " + " attic_crossing.o "+ sys.argv[1] + "_wrap.o -o lib" + sys.argv[1] + ".so"
os.system(c1) 
os.system(c2)
os.system(c3)
# print c1
# print c2
# print c3
