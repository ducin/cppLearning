cppLearning
===========

cmake
-----

Ue the cmake script to compile binaries. Follow those steps (starting in root
project directory):

    $ cd build
    $ cmake ..
    $ make

cppunit
-------

You need to have cppunit installed on the machine where you compile the project.
Do it on ubuntu with:

    sudo apt-get install libcppunit-dev libcppunit-1.12-1

Then the -lcppunit flag will be added while compiling.
