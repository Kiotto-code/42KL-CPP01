# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 17:03:30 by yichan            #+#    #+#              #
#    Updated: 2023/06/05 17:11:27 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	run
CXX			=	c++
CXXFLAG		=	-Wall -Werror -Wextra
SRCS_PATH	=	./srcs
OBJS_PATH	=	./objs
INCLUDES	=	./includes
SRCS		=	$(wildcard $(SRCS_PATH)/*.cpp)
OBJS		=	$(patsubst $(SRCS_PATH)/*.cpp, $(OBJS_PATH)/*.0,  SRCS)

all					:	$(NAME)

$(NAME)				:	$(OBJS)
						$(CXX) $(CXXFLAG) S^ -o $@

$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.cpp ./Makefile 
						mkdir -p $(@D)
						$(CXX) $(CXXFLAG) -I$(INCLUDES) -c $< -o $A

clean		:
				rm -rf $(OBJS_PATH)

fclean		:	clean
				rm -rf $(NAME)
				
re			:	fclean all

valgrind	:
				valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt $(NAME)

.PHONY		:	clean fclean re all