# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 17:03:30 by yichan            #+#    #+#              #
#    Updated: 2023/08/02 17:18:28 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME		=	harl
# CXX			=	c++
# CXXFLAGS		=	-Wall -Werror -Wextra -g3 -std=c++98
# SRCS_PATH	=	./srcs
# OBJS_PATH	=	./objs
# INCLUDES	=	./include
# SRCS		=	$(wildcard $(SRCS_PATH)/*.cpp)
# OBJS		=	$(patsubst $(SRCS_PATH)/*.cpp, $(OBJS_PATH)/*.o, $(SRCS))

# all					:	$(NAME) 

# $(NAME)				:	$(OBJS)
# 						$(CXX) $(CXXFLAGS) $^ -o $@

# $(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.cpp ./Makefile 
# 						mkdir -p $(@D)
# 						$(CXX) $(CXXFLAGS) -I$(INCLUDES) -c $< -o $@

# clean		:
# 				rm -rf $(OBJS_PATH)

# fclean		:	clean
# 				rm -rf $(NAME)
				
# re			:	fclean all

# valgrind	:	all
# 				valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./$(NAME)

# .PHONY		:	clean fclean re all valgrind

NAME		=	harl
CXX			=	c++
CXXFLAGS		=	-Wall -Werror -Wextra -g3 -std=c++98 -pedantic
RM			=	rm -rf
INCLUDE		=	./include
SRCS_PATH	=	./srcs
OBJS_PATH	=	./objs
SRCS		=	$(wildcard $(SRCS_PATH)/*.cpp)
OBJS		=	$(patsubst $(SRCS_PATH)/%.cpp, $(OBJS_PATH)/%.o, $(SRCS))

RESET		=	\033[0m
GREEN		=	\033[38;5;46m
WHITE		=	\033[38;5;15m
GREY		=	\033[38;5;8m
ORANGE		=	\033[38;5;202m
RED			=	\033[38;5;160m

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CXX) $(CXXFLAGS) $^ -o $@
				@echo "The program name is $(RED)./$(NAME) $(RESET)"
				
$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.cpp ./Makefile $(INCLUDE)
						mkdir -p $(@D)
						$(CXX) $(CXXFLAGS) -I$(INCLUDE) -c $< -o $@

clean		:
				rm -rf $(OBJS_PATH)

fclean		:	clean
				rm -rf $(NAME)
				$(shell find . -name "*.dSYM" -exec rm -rf {} \;)
				
re			:	fclean all

valgrind	:
				valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./$(NAME)

.PHONY		:	clean fclean re all valgrind