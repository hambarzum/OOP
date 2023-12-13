# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -g

# Source files
SRCS := src/main.cpp src/application.cpp src/cli/controller/command_controller.cpp src/cli/parsing/command_parser.cpp src/cli/commands/command_registry.cpp src/cli/commands/command.cpp src/cli/commands/add_item_command.cpp src/cli/commands/add_slide_command.cpp src/cli/commands/print_command.cpp src/cli/commands/quit_command.cpp src/cli/commands/options_value.cpp src/logic/actions/add_item_action.cpp src/logic/actions/add_slide_action.cpp src/model/items/item_base.cpp src/model/items/item.cpp src/model/items/item_group.cpp src/model/items/item_attributes/geometry.cpp src/model/items/item_attributes/visual_attributes.cpp src/model/document.cpp src/model/slide.cpp src/logic/director.cpp src/rendering/shapes/rectangle_shape.cpp src/rendering/renderers/console_renderer.cpp src/rendering/shape_library.cpp 

# Object file directory
OBJ_DIR := object_files

# Object files
OBJS := $(patsubst src/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Executable name
TARGET := app

# Compile rule
$(OBJ_DIR)/%.o: src/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Build rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Run rule
run: $(TARGET)
	./$(TARGET)

# Clean rule
clean:
	rm -rf $(OBJ_DIR) $(TARGET)
