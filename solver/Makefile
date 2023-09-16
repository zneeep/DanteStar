##
## EPITECH PROJECT, 2022
## B-CPE-200-LYN-2-1-dante-arthur.maquet
## File description:
## Makefile
##

TEST_SRC		=	./tests/

SRC				=	$(filter-out ./src/main.c, $(wildcard ./src/*.c ./src/**/*.c ./src/**/**/*.c))

MAIN_SRC		=	./src/main.c

TESTS			=	$(wildcard ./tests/src/*.c ./tests/src/**/*.c)

NAME			=	solver

INCLUDE			=	-I./include

INCLUDE_TEST	=	-I$(LIB_FILE)/include

all:
	gcc -g3 -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE)

clean:
	@rm -f peda*
	@rm -f *.gc*
	@rm -f *.o
	@rm -f -r unit_tests
	@rm -f -r mouli_maps*
	@rm -f -r $(NAME).dSYM

fclean:	clean
	rm -f $(NAME)

re:	fclean all

precise:
	cd $(LIB_FILE) && make
	gcc -g3 -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB) -Wall -Wextra

tests_run:	re
	gcc -c $(SRC) $(INCLUDE) --coverage
	gcc -c $(TESTS) $(INCLUDE) $(INCLUDE_TEST)
	gcc -o unit_tests *.o $(LIB) -lcriterion -lgcov
	./unit_tests --always-succeed
	gcovr
