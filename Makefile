all:
	cd libft
	make
	cd ..
	rm libft.a libft.h
	cp libft/libft.a libft.a
	cp libft/libft.h libft.h
	clang -L. -lft main.c
	cd libft
	make fclean
	cd ..
clean:
	rm libft.h libft.a
bonus:
	cp libft/libft.a libft.a
	cp libft/libft.h libft.h
