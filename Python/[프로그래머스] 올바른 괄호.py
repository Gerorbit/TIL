# 내가 푼 코드1(stack 아이디어 사용X)
def solution(s):
    cnt = 0
    left = 0
    right = 0
    for i in s:
        if cnt < 0:
            return False  # 한번이라도 ')'가 더 많아지는 순간 False
        elif i == '(':
            cnt += 1
            left += 1
        elif i ==')':   
            cnt -=1
            right += 1

    if left!=right:    # 최종적으로 '('와 ')'의 갯수가 맞지 않으면 False
        return False
            
    return True
  
  
  # 내가 푼 코드2(stack 아이디어 사용O)
  def solution(s):
    stack = []
    answer = True
    
    for i in s:
        if i == '(':
            stack.append(i)
        elif i == ')':
            if not stack or (stack[len(stack)-1] != '('):
                answer = False
                break
            else:
                stack.pop()
    if stack:
        answer = False
    
    return answer
