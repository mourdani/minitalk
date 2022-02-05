

SRC_SERVER		=	src/server.c\
								src/utils.c

SRC_CLIENT		=	src/client.c\
								src/utils.c

OBJ_SERVER		= 	${patsubst src/%, obj/%, $(SRC_SERVER:.c=.o)}
OBJ_CLIENT		= 	${patsubst src/%, obj/%, $(SRC_CLIENT:.c=.o)}

SERVER			= 	server
CLIENT			=	client

INC				= -I inc/

CC				=	gcc
RM				=	rm -rf
CFLAGS			=	-Wall -Werror -Wextra

all:	obj $(CLIENT) $(SERVER)


$(CLIENT):	${OBJ_CLIENT}
			$(CC)  $(CFLAGS) $(OBJ_CLIENT) -o $(CLIENT)

$(SERVER):	${OBJ_SERVER}
			$(CC)  $(CFLAGS) $(OBJ_SERVER) -o $(SERVER)

obj:
				mkdir -p obj

obj/%.o: src/%.c
				$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			${RM} obj ${OBJ_CLIENT} ${OBJ_SERVER}

fclean:		clean
			${RM} ${CLIENT} ${SERVER}

re:			fclean all

.PHONY:		all clean fclean re
