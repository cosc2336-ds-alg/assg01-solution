# source files in this project (for beautification)
PROJECT_NAME=assg01
sources = $(PROJECT_NAME)-tests.cpp \
					$(PROJECT_NAME)-main.cpp \
					assg01-functions.hpp \
					assg01-functions.cpp


# template files, list all files that define template classes
# or functions and should not be compiled separately (template
# is included where used)
template-files =


# object file targets used for both testing and simulation
assg-objects = assg01-functions.o


# common targets and variables used for all assignments/projects
include ../include/Makefile.inc
