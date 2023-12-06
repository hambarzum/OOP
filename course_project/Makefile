
all:
	make build && make run && make clean

build:
	g++ src/main.cpp src/application.cpp src/cli/controller/command_controller.cpp src/cli/parsing/command_parser.cpp src/cli/commands/command_registry.cpp src/cli/commands/command.cpp src/cli/commands/add_command.cpp src/cli/commands/quit_command.cpp src/cli/commands/options_value.cpp src/logic/actions/add_item_action.cpp src/model/items/item_base.cpp src/model/items/item.cpp src/model/items/item_group.cpp src/model/items/item_attributes/bounding_box.cpp src/model/items/item_attributes/visual_attributes.cpp src/model/document.cpp src/model/slide.cpp src/logic/director.cpp -o app

run:
	./app
		
clean:
	rm -rf app