
all:
	make build && make run && make clean

build:
	g++ src/main.cpp src/application.cpp src/cli/controller/command_controller.cpp src/cli/parsing/command_parser.cpp src/cli/commands/command_registry.cpp src/cli/commands/command.cpp src/cli/commands/add_command.cpp src/cli/commands/quit_command.cpp src/cli/commands/options_value.cpp src/logic/actions/add_item_action.cpp src/logic/director.cpp -o app

run:
	./app
		
clean:
	rm -rf app