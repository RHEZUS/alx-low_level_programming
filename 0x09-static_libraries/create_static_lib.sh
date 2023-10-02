#!/bin/bash
#!/bin/bash

#compile all the files and set the ouput extension to .o
for source_file in *.c
do
        gcc -c $source_file -o ${source_file%.c}.o
done

# create the static library with all the compiled files
ar rcs liball.a *.o

