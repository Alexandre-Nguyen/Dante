# Dante
A program who generate and resolve maze (made in group)

First use the command: ./make

MAZE

This command generate a maze in a file in the folder lab
Use the command: ./maze "width" "height" > lab/file  for exemple: ./maze 50 40 > lab/test

This command generate a perfect maze (only one way) in a file in the folder lab
Use the command: ./maze "width" "height" parfait > lab/file for exemple: ./maze 50 40 parfait > lab/test

SOLVER

Use the command: ./solver maze_file for exemple ./solver lab/test
The solution is representate by 'o' character

You can see the solution better with the command: ./solver maze_file | grep 'o'

PERF.SH

If you want to see the perf of the solver

Use the command: ./perf.sh ./solver maze_file for exemple: ./perf.sh ./solver lab/test

Like the Solver you can add "| grep 'o'" at the end of the command to see better the solution
For exemple: ./perf.sh ./solver lab/test | grep 'o'

At the end you can use the command: ./make fclean to clean your repository
