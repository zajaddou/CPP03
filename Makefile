
all:
	@echo "Usage: make [0 | 1 | 2 | clean_all]"

0:
	@make -C ex00 run

1:
	@make -C ex01 run

2:
	@make -C ex02 run

3:
	@make -C test run

push:
	@git add .
	@git commit -m "Update"
	@git push
	@clear

.PHONY: all ex00 ex01 ex02