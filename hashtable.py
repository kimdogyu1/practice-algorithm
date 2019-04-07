tablesize = 11
def hashcode(arr):
    
    cell = [0 for i in range(tablesize)]
    i = 0
    while i < len(arr):
        k = arr[i] % 11
        if cell[k] is not 0:
            while cell[k] is not 0:
                k = (k + 1) % tablesize
            cell[k] = arr[i]
        else:
            cell[k] = arr[i]
        i += 1
    return cell

value = [132,102,15,5,257,558,32]
print("0~10 번 까지의 테이블 (교재 187쪽 컴퓨터 메모리 내의 셀. 예제 그대로 사용, 해시코드가 같을경우 테이블의 빈자리(0)에 채워들어감)")
print(hashcode(value))
