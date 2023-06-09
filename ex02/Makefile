# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:53:37 by yichan            #+#    #+#              #
#    Updated: 2023/06/10 01:16:20 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98
SRCS_PATH	=	./srcs
OBJ_PATH	=	./obj
INCLUDE		=	./include
SRCS		=	$(wildcard $(SRCS_PATH)/*.cpp)
OBJS		=	$(patsubst $(SRCS_PATH)/%.cpp, $(OBJ_PATH)/%.o, $(SRCS))

RESET		=	\033[0m
GREEN		=	\033[38;5;46m
WHITE		=	\033[38;5;15m
GREY		=	\033[38;5;8m
ORANGE		=	\033[38;5;202m
RED			=	\033[38;5;160m


all				:	$(NAME)

$(NAME)			:	$(OBJS)
					$(CXX) $(CXXFLAGS) $^ -o $@
					@echo "$(GREEN) ./$(NAME) $(RESET)"
					
$(OBJ_PATH)/%.o :	$(SRCS_PATH)/%.cpp ./Makefile
					mkdir -p $(@D)
					$(CXX) $(CXXFLAGS) $(CSAN) -c $< -o $@

clean			:
					rm -rf $(OBJ_PATH)
				
fclean			:	clean
					rm -rf $(NAME) 

re				:	fclean all

.PHONY			:	clean fclean re all  