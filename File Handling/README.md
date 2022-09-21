# File Handling

-   A file is a container in computer storage devices used for storing data.

-   Files allows us to store data in a manner which can be later retrieved and displayed.

-   It also helps us to preserve our data, even when the program terminates.

-   Data stored in a file can easily be accessible.



# Types of Files
-   Text Files
    - They are normal .txt files.
    - They are easily created and edited.
    - Data are stored in plain text.

-   Binary Files
    - They are .bin files.
    - Data are stored in 0s and 1s.
    - They can store high amount of data.
    - They provide more security than text files, since they are not easily readable.


# Declaring a File
-   syntax: FILE *(file_pointer)


# File Operations
-   Create a new file
-   Open an existing file
-   Read from a file
-   Write to a file
-   Moving a specific location in a file(Seeking)
-   Closing a file


    # Opening a File
    -   syntax: fopen("filename", "mode")


# File Modes
-   "r" - Read
-   "rb" - Read in binary mode

-   "w" - Write, overwrite file if it exists
-   "wb" - Write in binary mode

-   "a" - Write, but append instead of overwrite
-   "ab" - Open for append in binary mode

-   "r+" - Read and Write. Don't destroy file if it exists
-   "rb+" - Read and Write in binary mode

-   "w+" - Read and Write, but overwrite file if it exists
-   "wb+" - Open for both read and write in binary mode

-   "a+" - Read and Write, but append instead of overwrite
-   "ab+" - Open for both reading and appending in binary mode


# File Functions
-   fopen() - Opens a new or existing file
-   fprintf() - Write data into the file
-   fscanf() - Read data from the file
-   fputc() - Write a character into the file
-   fgetc() - Read a character from a file
-   fclose() - Close a file
-   fseek() - Set a file pointer to a given position
-   fputw() - Write an integer to a file
-   fgetw() - Read an integer from a file
-   ftell() - Return the current position
-   rewind() - Set the file pointer to the beginning of the file