# <ins>Problem statement</ins>
**Implement a Minimax algorithm in C to create an AI agent capable of making optimal decisions in two-player games with perfect information,**
**such as Tic-Tac-Toe or Connect Four. Provide an analysis of the time and space complexities of the implementation algorithm.**

* Minimax algorithm performs DFS.
* Used for two player games.

## <ins>Links</ins>
* [Minimax Algorithm-1](https://youtu.be/Ntu8nNBL28o?si=3XC4OwxNQKhuEP3r).
* [Minimax Algorithm-2](https://youtu.be/l-hh51ncgDI?si=CVCxS5CFWPY6n_kw).
* [Minimax Algorithm-3](https://youtu.be/S7L4-KDTvEE?si=73Woy2PdFmmaIjQv).
* [Minimax Algorithm-4](https://youtu.be/SLgZhpDsrfc?si=x53k2E5Ww_4DQT8L).
* [Minimax Algorithm-5](https://youtu.be/trKjYdBASyQ?si=3-VLvu-lEyqjVu5V).
* [Minimax Algorithm-6](https://youtu.be/xXCszgfPN6Y?si=6CEXx1K94cR3dwHM).

## <ins>Games</ins>
* Chess.
* Checkers.
* Tic-Tac-Toe.

## <ins>Properties</ins>
* Definitely finds solution.
* Optimal.
* Time complexity: $O(b^m)$, where $b$ is the **branching factor** and $m$ is the **maximum depth**.
* Space complexity: $O(b^m)$.

## <ins>Evaluation function or Heuristic function in minimax algorithm</ins>
This function calculates the value of the board depending on the placement of pieces on the board.

We are using this function for the tic-tac-toe game.

**Basic idea:** To give a high value for a board in the maximizer's turn or a low value in the minimizer's turn.

* _Source:_ [https://www.geeksforgeeks.org/introduction-to-evaluation-function-of-minimax-algorithm-in-game-theory/](https://www.geeksforgeeks.org/introduction-to-evaluation-function-of-minimax-algorithm-in-game-theory/).
*_Source:_ [https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-1-introduction/](https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-1-introduction/).

<p align = "center">
&#9678; &#9678; &#9678;
</p>
