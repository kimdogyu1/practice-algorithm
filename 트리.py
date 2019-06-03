class Node:

    def __init__(self, item, left=None, right=None): # 노드 생성자

        self.item  = item 

        self.left  = left 

        self.right = right 




class BinaryTree:

    def __init__(self): # 트리 생성자

        self.root = None 




    def preorder(self, n): # 전위순회

        if n != None:

            print(str(n.item),' ', end='')

            if n.left:

                self.preorder(n.left)

            if n.right:

                self.preorder(n.right)

 

    def inorder(self, n): # 중위순회

        if n != None:

            if n.left:

                self.inorder(n.left)

            print(str(n.item),' ', end='')

            if n.right:

                self.inorder(n.right)




    def postorder(self, n): # 후위순회

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


    t = BinaryTree()    # 이진트리 객체 t 생성 

    A = Node('A')       # 10개의 노드 생성  

    B = Node('B')

    C = Node('C')    

    D = Node('D')    

    E = Node('E')    

    F = Node('F')

    G = Node('G')    

    H = Node('H')

    I = Node('I')

    J = Node('J')




    t.root = A          # t의 루트노드를 n1으로

    A.left  = B         # A의 왼쪽 자식         -> B

    A.right = F         # A의 오른쪽 자식      -> F

    B.left  = C         # B의 왼쪽 자식        -> C

    B.right = D         # B의 오른쪽 자식      -> D

    D.right = E         # D의 오른쪽 자식      -> E

    F.right = G         # F의 오른쪽 자식      -> G

    G.left  = H         # G의 왼쪽 자식        -> H       

    H.left  = I         # H의 왼쪽 자식        -> I

    H.right = J         # H의 오른쪽 자식      -> J




    print('전위 운행: ', end='')

    t.preorder(t.root)

    print()




    print('중위 운행: ', end='')

    t.inorder(t.root)

    print()




    print('후위 운행: ', end='')

    t.postorder(t.root)
