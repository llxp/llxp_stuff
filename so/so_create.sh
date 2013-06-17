

#!/bin/bash

ARG=1
BADARG=65
if [ "$#" -ne "$ARG" ] 
	then
	echo -e "\t\tUsages: `basename $0` name_of_shared_library"
	exit $BADARG
fi

libname=lib"$1"

##########################################################################
# uncomment next 2 lines and comment 3-4 lines if you create C++ library #
##########################################################################

#g++ -fPIC -c "$1".cpp          
#g++ -shared -Wl,-soname,"$libname".so.1 -o "$libname".so.1.0 "$1".o
gcc -fPIC -c "$1".c
gcc -shared -Wl,-soname,"$libname".so.1 -o "$libname".so.1.0 "$1".o
ln -s "$libname".so.1.0 "$libname".so.1
ln -s "$libname".so.1 "$libname".so

echo -e "\t\tSHARED LIBRARY $libname IS CREATED"
echo -e "\t\t==================================\n"
echo
mv "$libname".* /usr/local/lib/

echo -e "\t\tldconfig is working"
ldconfig &

exit 0


