# Example ('python3 call_Fct.py') that calls a C library

import ctypes as CT

# Access library
CLIB = CT.CDLL("./libFct.so")

# Function prototypes for Python (of C functions)
# For (FILE *) in C, we have not described the (long) structure (not needed)
#   Instead, we use c_void_p (pointer to void)
CLIB.FileOpen.argtypes = [ CT.c_char_p, CT.POINTER(CT.c_int) ]
CLIB.FileOpen.restype  = CT.c_void_p
CLIB.FileSize.argtypes = [ CT.c_void_p ]
CLIB.FileSize.restype  = CT.c_int

# Calling C functions
filename = "file.txt"
filenameU8 = filename.encode("utf-8") # Convert str to byte array
name_len = CT.c_int(0)

fd = CLIB.FileOpen(filenameU8, CT.byref(name_len))
print("Name length: %d" % (name_len.value))

size = CLIB.FileSize(fd)
print("File size = %d" % (size))
