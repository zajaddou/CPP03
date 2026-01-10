
all:
	@echo "Usage: make [0 | 1 | 2 | clean_all]"

0:
	@make -C ex00 run

1:
	@make -C ex01 run

2:
	@make -C ex02 run

clean_all:
	@make -C ex00 fclean
	@make -C ex01 fclean
	@make -C ex02 fclean
	@echo "All directories cleaned."

.PHONY: all ex00 ex01 ex02 clean_all