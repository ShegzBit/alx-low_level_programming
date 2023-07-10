#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define LINE "----------------------------------------\n"
#define write mock_write

/*Test with a valid filename and a positive number of letters, but simulate a write failure or partial write by using a mock or stub for the write function*/
  /* This part requires some additional code to replace the write function with a fake one that returns an error or a smaller number than expected*/
  /*For simplicity, we assume that there is a function called mock_write that does that, and we use a macro to redefine write as mock_write*/ 
ssize_t mock_write(int fd, const void *buf, size_t count) {
    /*This function always returns -1 to simulate an error*/ 
    (void)fd;
    (void)buf;
    (void)count;
    return (-1);
    /*Alternatively, this function could return a smaller number than count to simulate a partial write*/ 
    /*return (count / 2);*/ 
  }

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);

  /* Test with a valid filename and a positive number of letters that is less than the file size*/
  printf("Test 1: valid filename, letters < file size\n");
  n = read_textfile(av[1], 10);
  printf("\nReturn value: %ld\n", n);
  printf(LINE);

  /* Test with a valid filename and a positive number of letters that is equal to or greater than the file size*/
  printf("Test 2: valid filename, letters >= file size\n");
  n = read_textfile(av[1], 100);
  printf("\nReturn value: %ld\n", n);
  printf(LINE);

  /*Test with a valid filename and zero letters*/
  printf("Test 3: valid filename, zero letters\n");
  n = read_textfile(av[1], 0);
  printf("\nReturn value: %ld\n", n);
  printf(LINE);

  /*Test with an invalid filename, such as a non-existing file or a directory*/ 
  printf("Test 4: invalid filename\n");
  n = read_textfile("no_such_file.txt", 10);
  printf("\nReturn value: %ld\n", n);
  printf(LINE);

  /*Test with a NULL filename*/ 
  printf("Test 5: NULL filename\n");
  n = read_textfile(NULL, 10);
  printf("\nReturn value: %ld\n", n);
  printf(LINE);

  /*Test with a valid filename and a negative number of letters*/
  printf("Test 6: valid filename, negative letters\n");
  n = read_textfile(av[1], -10);
  printf("\nReturn value: %ld\n", n);
  printf(LINE);

  
  printf("Test 7: valid filename, positive letters, write failure or partial write\n");
  n = read_textfile(av[1], 10);
  printf("\nReturn value: %ld\n", n);
  
   /*Restore the original definition of write*/
   #undef write

    return (0);
}
