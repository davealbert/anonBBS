# Makefile for anonBBS - an Anonymous BBS
#
IDIR = include
CC = g++
CFLAGS = -I $(IDIR)

ODIR = obj
LDIR = lib
SRC = src
LIBS = -lm

EXECUTABLE = anonBBS

_DEPS = commands.h 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o commands.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))



$(ODIR)/%.o: $(SRC)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXECUTABLE): $(OBJ)
	$(CC)	-o $@ $^ $(CFLAGS) $(LIBS)



.PHONY: clean
clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ $(EXECUTABLE)