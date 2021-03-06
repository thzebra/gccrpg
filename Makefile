
CFLAGS = -Wall -std=c++11

_SOURCES = Coordonnees.cpp \
	  Creature.cpp \
	  Enchantement.cpp \
	  Humanoide.cpp \
	  Inventaire.cpp \
	  Jauge.cpp \
	  Objet.cpp \
	  Palier.cpp \
	  Effet.cpp \
	  Stat.cpp \
	  Buff.cpp \
	  Alteration.cpp \
	  PNJ.cpp \
	  Perso.cpp \
	  Utilisable.cpp \
	  main.cpp

SOURCES = $(patsubst %,$(SRCDIR)/%,$(_SOURCES))

_DEPS = $(patsubst %.cpp,%.hpp,$(_SOURCES))
DEPS = $(patsubst %, $(HDRDIR)/%, $(_DEPS))

_OBJ = $(patsubst %.cpp,%.o,$(_SOURCES))
OBJ = $(patsubst %, $(BUILDDIR)/%,$(_OBJ))

BUILDDIR = build
SRCDIR = src/Gameplay
HDRDIR = $(SRCDIR)
EXEC = main

default : $(EXEC)

$(BUILDDIR)/%.o : build
	$(CXX) -o $@ -c $(patsubst $(BUILDDIR)/%.o,$(SRCDIR)/%.cpp,$@) $(CFLAGS)

$(EXEC) : $(OBJ)
	$(CXX) -o $(EXEC) $(OBJ) $(CFLAGS)

build :
	mkdir $(BUILDDIR)

clean :
	rm -r $(BUILDDIR) $(EXEC)
