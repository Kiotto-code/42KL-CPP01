# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 19:56:09 by yichan            #+#    #+#              #
#    Updated: 2023/06/10 01:16:15 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98
# RM			= rm -rf
SRCS_PATH	= ./srcs
OBJS_PATH	= ./obj
INCLUDES	= ./include
SRCS		= $(wildcard $(SRCS_PATH)/*.cpp)
OBJS		= $(patsubst $(SRCS_PATH)/%.cpp, $(OBJS_PATH)/%.o, $(SRCS))

RESET		=	\033[0m
GREEN		=	\033[38;5;46m
WHITE		=	\033[38;5;15m
GREY		=	\033[38;5;8m
ORANGE		=	\033[38;5;202m
RED			=	\033[38;5;160m


all					:	$(NAME)

$(NAME)				:	$(OBJS)
						$(CXX) $(CXXFLAGS) $^ -o $@
						@echo "$(GREEN) ./$(NAME) $(RESET)"

$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.cpp ./Makefile $(INCLUDES)
						mkdir -p $(@D)
						$(CXX) $(CXXFLAGS) -I$(INCLUDES) -c $< -o $@

clean				:
						rm -rf $(OBJS_PATH)

fclean				:	clean
						rm -rf $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re

