import os,sys
#print sys.argv[1]

c1 = "swig -scilab" + "  " + sys.argv[1] + ".i"
c2 = "gcc -fPIC -c -I/usr/local/include/scilab" + " " + sys.argv[1] + "_wrap.c"
c3 = "gcc -shared" + " " + sys.argv[1] + "_wrap.o -o lib" + sys.argv[1] + ".so"
os.system(c1) 
os.system(c2)
os.system(c3)
