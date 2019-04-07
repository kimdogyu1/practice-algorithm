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
print("0~10 �� ������ ���̺� (���� 187�� ��ǻ�� �޸� ���� ��. ���� �״�� ���, �ؽ��ڵ尡 ������� ���̺��� ���ڸ�(0)�� ä����)")
print(hashcode(value))
