#GRUPO :ANDRÉ HABIB && LUAN ROCHA 


PROG = jogo_do_dado
CC = g++
CPPFLAGS = -O0 -g -Wall -std=c++11 
OBJS = main.o jogador.o jogo.o 


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o :
	$(CC) $(CPPFLAGS) -c main.cpp

jogador.o : jogador.h
	$(CC) $(CPPFLAGS) -c jogador.cpp

jogo.o : jogo.h
	$(CC) $(CPPFLAGS) -c jogo.cpp