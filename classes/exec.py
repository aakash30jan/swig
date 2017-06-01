import os,sys
#print sys.argv[1]

c1 = "swig -scilab" + " -c++ " + " -o " + sys.argv[1] + "_wrap.cpp" +  "  " + sys.argv[1] + ".i"
c2 = "g++ -fPIC -c -I/usr/local/include/scilab" + " " + sys.argv[1] + "_wrap.cpp"
c3 = "g++ -shared" + " " + sys.argv[1] + "_wrap.o -o lib" + sys.argv[1] + ".so"
print c1
print c2
print c3
os.system(c1) 
os.system(c2)
os.system(c3)
