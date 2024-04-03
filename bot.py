class Bot:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def move_towards(self, target_x, target_y):
        if self.x < target_x:
            self.x += 1
        elif self.x > target_x:
            self.x -= 1

        if self.y < target_y:
            self.y += 1
        elif self.y > target_y:
            self.y -= 1


bot = Bot(0, 0)
target_x, target_y = 3, 3
bot.move_towards(target_x, target_y)
print(bot.x, bot.y)
