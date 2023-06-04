# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 19:56:09 by yichan            #+#    #+#              #
#    Updated: 2023/05/18 00:27:02 by yichan           ###   ########.fr        #
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

all					:	$(NAME)
$(NAME)				:	$(OBJS)
						$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.cpp ./Makefile $(INCLUDES)
						mkdir -p $(@D)
						$(CXX) $(CXXFLAGS) -I$(INCLUDES) -c $< -o $@

clean				:
						rm -rf $(OBJS_PATH)

fclean				:	clean
						rm -rf $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re

