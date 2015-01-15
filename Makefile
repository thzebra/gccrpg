CC = g++
CFLAGS = -Wall -I$(SRCDIR)

_SOURCES = Coordonnees.cpp \
	  Creature.cpp \
	  Enchantement.cpp \
	  Humanoide.cpp \
	  Inventaire.cpp \
	  Jauge.cpp \
	  main.cpp \
	  Objet.cpp \
	  Palier.cpp \
	  Perso.cpp \
	  PNJ.cpp \
	  Talent.cpp \
	  Utilisable.cpp \
	  main.cpp
SOURCES = $(patsubst %, $(SRCDIR)/%, $(_SOURCES))

_DEPS = $(patsubst %.cpp, %.o, $(_SOURCES))
DEPS = $(patsubst %, $(HDRDIR)/%, $(_DEPS))

_OBJ = $(patsubst %.cpp, %.o, $(_SOURCES))
OBJ = $(patsubst %, $(BUILDDIR)/%, $(_OBJ))

BUILDDIR = build
SRCDIR = src/Gameplay
HDRDIR = $(SRCDIR)
EXEC = main

default : $(EXEC)

build :
	mkdir build

$(BUILDDIR)/%.o : $(SRCDIR)/%.cpp $(DEPS) build
	$(CC) -c -o $@ $(patsubst $(BUILDDIR)/%.o, $(SRCDIR)/%.cpp, $@) $(CFLAGS)


$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) $(CFLAGS)

clean :
	rm -r $(BUILDDIR)
