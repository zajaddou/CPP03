
all:
	@echo "Usage: make [0 | 1 | 2 | clean_all]"

0:
	@make -C ex00 run

1:
	@make -C ex01 run

2:
	@make -C ex02 run

push:
	@git add .
	@git commit -m "Update"
	@git push

.PHONY: all ex00 ex01 ex02 clean_all