#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#define BUFFER_SIZE 32  // You can define the BUFFER_SIZE here or during compilation

#include <stdlib.h>
#include <unistd.h>

int get_next_line(char **line);

#endif
