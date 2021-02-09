.PHONY: clean All

All:
	@echo "----------Building project:[ Problem_07 - Debug ]----------"
	@cd "Problem_07" && "$(MAKE)" -f  "Problem_07.mk"
clean:
	@echo "----------Cleaning project:[ Problem_07 - Debug ]----------"
	@cd "Problem_07" && "$(MAKE)" -f  "Problem_07.mk" clean
