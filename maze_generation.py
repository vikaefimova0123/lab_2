import random

def generate_maze(width, height):
    maze = [[1 for _ in range(width)] for _ in range(height)]

    def build_wall(x, y, direction):
        if direction == 1:
            maze[y][x] = 0
            maze[y][x+1] = 0
            maze[y][x+2] = 0
        else:
            maze[y][x] = 0
            maze[y+1][x] = 0
            maze[y+2][x] = 0

    def split_room(x, y, w, h):
        if w < 3 or h < 3:
            return

        horizontal = random.choice([True, False])

        if horizontal:
            split_y = random.randint(y + 1, y + h - 2)
            build_wall(x, split_y, 1)
            split_room(x, y, w, split_y - y)
            split_room(x, split_y + 2, w, y + h - split_y - 2)
        else:
            split_x = random.randint(x + 1, x + w - 2)
            build_wall(split_x, y, 0)
            split_room(x, y, split_x - x, h)
            split_room(split_x + 2, y, x + w - split_x - 2, h)

    split_room(0, 0, width, height)
    return maze

maze = generate_maze(20, 20)
for row in maze:
    print(''.join(['#' if cell == 1 else ' ' for cell in row]))
