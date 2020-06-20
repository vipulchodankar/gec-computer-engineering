# Description
__Add these to your bashrc to make compiling and running c programs a lot easier.__

## Dependencies
1) gcc
2) g++
3) make

## Compiling and running C code:

```
function c(){
    cFile=$1
    cFile=${cFile::-2}
    error=`make $cFile`
    if [ $? -eq 0 ]
    then 
        ./$cFile
    fi
    if [ -f $cFile ] 
    then
        rm $cFile
    fi
}
```

### Usage
TO compile a file named file.c, run the command:
```
c file.c
```
and it will compile and run the code. If the compilation is successful the output file is automatically removed. This was done as I found it frustrating that I couldn;t use tab completion due to get file.c as there was another file named "file"

Errors (if any) will still be displayed


## Compiling and running C++ code:
```
function C(){
    cFile=$1
    cFile=${cFile::-4}
    error=`make $cFile`
    if [ $? -eq 0 ]
    then 
        ./$cFile
    fi
    if [ -f $cFile ] 
    then
        rm $cFile
    fi
}

```

### Usage
TO compile a file named file.cpp, run the command:
```
C file.cpp
```
and it will compile and run the code. If the compilation is successful the output file is automatically removed. This was done as I found it frustrating that I couldn;t use tab completion to get file.c as there was another file named "file"

Errors (if any) will still be displayed
