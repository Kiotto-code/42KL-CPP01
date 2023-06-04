# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:53:37 by yichan            #+#    #+#              #
#    Updated: 2023/05/23 00:30:32 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98
CSAN		=	-fsanitize=address
SRCS_PATH	=	./srcs
OBJ_PATH	=	./obj
INCLUDE		=	./include
SRCS		=	$(wildcard $(SRCS_PATH)/*.cpp)
OBJS		=	$(patsubst $(SRCS_PATH)/%.cpp, $(OBJ_PATH)/%.o, $(SRCS))

all				:	$(NAME)

$(NAME)			:	$(OBJS_PATH)
					$(CXX) $(CXXFLAGS) $(CSAN) $^ -o $@
					echo "./$(NAME)" 

$(OBJ_PATH)/%.o :	$(SRCS_PATH)/%.cpp Makefile |
					mkdir -p $(@D)
					$(CXX) $(CXXFLAGS) $(CSAN) -c $< -o $@

clean			:
					rm -rf $(OBJ_PATH)
				
fclean			:	clean
					rm -rf $(NAME) 

re				:	fclean all

.PHONY			:	clean fclean re all  