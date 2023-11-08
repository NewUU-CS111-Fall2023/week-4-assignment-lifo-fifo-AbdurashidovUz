def evaluate_postfix(expression):
    stack = []

    for token in expression.split():
        print(expression.split())
        if token.isdigit():
            stack.append(int(token))
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if token == '+':
                result = operand1 + operand2
            elif token == '-':
                result = operand1 - operand2
            elif token == '*':
                result = operand1 * operand2
            stack.append(result)

    return stack[0]



expression = input()
result = evaluate_postfix(expression)
print(result)
