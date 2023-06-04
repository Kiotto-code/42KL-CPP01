# # **************************************************************************** #
# #                                                                              #
# #                                                         :::      ::::::::    #
# #    Makefile                                           :+:      :+:    :+:    #
# #                                                     +:+ +:+         +:+      #
# #    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
# #                                                 +#+#+#+#+#+   +#+            #
# #    Created: 2023/06/03 01:44:32 by yichan            #+#    #+#              #
# #    Updated: 2023/06/03 01:57:24 by yichan           ###   ########.fr        #
# #                                                                              #
# # **************************************************************************** #

# NAME		=	run
# CXX			=	c++
# CXXFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98 -pedantic
# CXXFLAGS	+=	-fsanitize=address

# INCLUDE		=	./include
# SRCS_PATH	=	./srcs
# OBJS_PATH	=	./objs
# SRCS		=	$(wildcard $(SRCS_PATH)/*.c)
# OBJS		=	$(patsubst $($(SRCS_PATH))%*.c, $($(OBJS_PATH))%*.o, $(SRCS))

# RESET		=	\033[0m
# GREEN		=	\033[38;5;46m
# WHITE		=	\033[38;5;15m
# GREY		=	\033[38;5;8m
# ORANGE		=	\033[38;5;202m
# RED			=	\033[38;5;160m

# all				:	NAME
# NAME			:	$(OBJS)
# 					$(CXX) $(CXXFLAGS) $^ -o $@
					
# $(OBJS_PATH)%.o	:	$(SRCS_PATH)%.cpp ./Makefile $(INCLUDE)
# 					$(CXX) $(CXXFLAGS) -I$(INCLUDE) -c $< -o $@

# clean			:
# 					rm -rf $(OBJS_PATH)

# fclean			:	clean
# 					rm -rf $(NAME)

# re				:	fclean all

# valgrind		:
# 					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt $(NAME)

# .PHONY			:	all clean fclean re valgrind

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichan <yichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 14:40:56 by yichan            #+#    #+#              #
#    Updated: 2023/06/03 01:38:16 by yichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	run
CXX			=	c++
CXXFLAG		=	-Wall -Werror -Wextra -g3 -std=c++98
# CXXFLAG		+=	-fsanitize=address
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
				$(CXX) $(CXXFLAG) $^ -o $@
				echo "$(GREEN) ./$(NAME) $(RESET)"
				
$(OBJS_PATH)/%.o	:	$(SRCS_PATH)/%.cpp ./Makefile $(INCLUDE)
						mkdir -p $(@D)
						$(CXX) $(CXXFLAG) -I$(INCLUDE) -c $< -o $@

clean		:
				rm -rf $(OBJS_PATH)

fclean		:	clean
				rm -rf $(NAME)
				
re			:	fclean all

valgrind		:
					valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt $(NAME)

.PHONY		:	clean fclean re all
