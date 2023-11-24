import pyautogui

# Input the number of levels for the pyramid
num_levels = int(input("Enter the number of levels for the pyramid: "))

# Define the block size and starting position
block_size = 20
start_x = 500
start_y = 500

# Loop through the levels and draw the pyramid
for level in range(1, num_levels + 1):
    num_blocks = level * 2 - 1  # Number of blocks in the current level
    x = start_x - (block_size * (level - 1))  # Adjust the starting position

    for _ in range(num_blocks):
        pyautogui.click(x, start_y)
        x += block_size

    start_y -= block_size  # Move up for the next level
