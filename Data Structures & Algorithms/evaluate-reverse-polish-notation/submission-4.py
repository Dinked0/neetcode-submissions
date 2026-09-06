class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        operators = {
            "+": lambda a, b: a + b,
            "-": lambda a, b: a - b,
            "*": lambda a, b: a * b,
            "/": lambda a, b: int(a / b)
        }

        for num in tokens:
            try:
                stack.append(int(num))
            except ValueError:
                b = stack.pop()
                a = stack.pop()

                res = operators[num](a, b)
                stack.append(res)

        return stack[-1]

