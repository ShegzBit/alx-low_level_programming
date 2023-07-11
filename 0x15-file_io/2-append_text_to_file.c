#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    /*Create file descriptors and neccessary variables*/
    int fd, written;

    /*Check if filename is null*/
    if (filename == NULL)
        return (NULL);
    /*Handle for text_content is null*/
    text_content = (text_content == NULL) ? "" : text_content;
    /*if the file does not exist return -1*/
}