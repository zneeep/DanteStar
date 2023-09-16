##
## EPITECH PROJECT, 2022
## B-CPE-200-LYN-2-1-dante-arthur.maquet
## File description:
## Makefile
##

all:
	cd generator && make
	cd solver && make

clean:
	cd generator && make clean
	cd solver && make clean

fclean:	clean
	cd generator && make fclean
	cd solver && make fclean

re:	fclean all

precise:
	cd generator && make precise
	cd solver && make precise

tests_run:	re
	cd generator && make tests_run
	cd solver && make tests_run
