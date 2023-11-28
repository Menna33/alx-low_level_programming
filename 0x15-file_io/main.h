#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
typedef unsigned int ssize_t;
typedef unsigned int size_t;
ssize_t read_textfile(const char *filename, size_t letters);
#endif MAIN_H
