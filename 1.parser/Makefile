
all:
	make build && make run && make clean

build:
	g++ src/main.cpp src/commands/add_command.cpp src/commands/multiply_command.cpp src/commands/quit_command.cpp src/commands/command_factory.cpp src/ui/iostream_user_interface.cpp src/command_parser/iostream_command_parser.cpp src/controller/command_controller.cpp -o project

run:
	./project
		
clean:
	rm -rf project