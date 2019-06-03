class Node:

    def __init__(self, item, left=None, right=None): # ��� ������

        self.item  = item 

        self.left  = left 

        self.right = right 




class BinaryTree:

    def __init__(self): # Ʈ�� ������

        self.root = None 




    def preorder(self, n): # ������ȸ

        if n != None:

            print(str(n.item),' ', end='')

            if n.left:

                self.preorder(n.left)

            if n.right:

                self.preorder(n.right)

 

    def inorder(self, n): # ������ȸ

        if n != None:

            if n.left:

                self.inorder(n.left)

            print(str(n.item),' ', end='')

            if n.right:

                self.inorder(n.right)




    def postorder(self, n): # ������ȸ

        if n != None:

            if n.left:

                self.postorder(n.left)

            if n.right:

                self.postorder(n.right)

            print(str(n.item),' ', end='')

#

#          A

#       /     |

#      B       F  

#     / |       |

#    C   D       G

#         |     /

#          E   H

#             / |

#            I   J




if __name__ == '__main__':


    t = BinaryTree()    # ����Ʈ�� ��ü t ���� 

    A = Node('A')       # 10���� ��� ����  

    B = Node('B')

    C = Node('C')    

    D = Node('D')    

    E = Node('E')    

    F = Node('F')

    G = Node('G')    

    H = Node('H')

    I = Node('I')

    J = Node('J')




    t.root = A          # t�� ��Ʈ��带 n1����

    A.left  = B         # A�� ���� �ڽ�         -> B

    A.right = F         # A�� ������ �ڽ�      -> F

    B.left  = C         # B�� ���� �ڽ�        -> C

    B.right = D         # B�� ������ �ڽ�      -> D

    D.right = E         # D�� ������ �ڽ�      -> E

    F.right = G         # F�� ������ �ڽ�      -> G

    G.left  = H         # G�� ���� �ڽ�        -> H       

    H.left  = I         # H�� ���� �ڽ�        -> I

    H.right = J         # H�� ������ �ڽ�      -> J




    print('���� ����: ', end='')

    t.preorder(t.root)

    print()




    print('���� ����: ', end='')

    t.inorder(t.root)

    print()




    print('���� ����: ', end='')

    t.postorder(t.root)
