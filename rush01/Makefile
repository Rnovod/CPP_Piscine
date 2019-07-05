NAME = ft_gkrellm

CFLAGS = -std=c++98 -Wall -Werror -Wextra
CC = clang++

S_DIR 	= srcs
HEADERS_DIR = includes

FILES := main \
	   	 UserHost \
		 OSInfo \
		 DateTime \
		 GraphicalMode \
		 CPU \
		 utilities	\
		 RAM \
		 Network \
		 NcursesMode \
		 CatModule

HEADERS :=  IMonitorDisplay \
	  	IMonitorModule \
		UserHost \
		OSInfo \
		DateTime \
		utilities \
		GraphicalMode \
		CPU \
		RAM \
		Network \
		CatModule

SDL_HEAD	=	-I ~/.brew/include/
SDL_LIB		=	-L ~/.brew/lib -lSDL2 -lSDL2_image -lSDL2_ttf


SRC := $(addprefix $(S_DIR)/, $(addsuffix .cpp, $(FILES)))
OBJ  = $(SRC:.cpp=.o)
INC := $($(addsuffix .hpp, $(HEADERS)))

INC_FLAGS =	-I $(HEADERS_DIR)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS_DIR)$(INC)
	$(CC) $(CFLAGS) -lncurses $(OBJ) -o $(NAME) $(SDL_LIB)
	@printf "\e[38;5;46m./$(NAME)    SUCCESSFULLY BUILD 🎉\e[0m\n"

$(OBJ) : %.o : %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ $(SDL_HEAD) $(INC_FLAGS)

clean:
	rm -f $(OBJ)
	@printf "🗑  \e[38;5;226mo. files DELETED\e[0m\n"

fclean: clean
	rm -f $(NAME)
	@printf "🗑  \e[38;5;226m./$(NAME)    DELETED\e[0m\n"

re: fclean all

.PHONY: all clean fclean re