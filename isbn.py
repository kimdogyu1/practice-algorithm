isbn = "9788964212479"
# isbn = "978159448950" 12자리일때, 유효 X
# isbn = "9788997142015" isbn 식별되지 않는 숫자, 유효 X

def ISBN(isbn):
   
    s = 0
    result = False
    
    if len(isbn) != 13: 
        return False

    
    for i in range(len(isbn)):
            num = int(isbn[i])
            if i % 2 !=0:
                s += num * 3
            else:
                s += num * 1
    result = s % 10 == 0
    
    return result


if ISBN(isbn): 
    print("유효 0") 
else: 
    print("유효 X") 


# google


import re

def isValidISBN( code ):

    #code = code.replace('-', '').replace(' ', '')
    return  {
        
        13 : isValidISBN13
    }.get( len(code), lambda n: False)( code )


def isValidISBN13( code ):
    
    result = False
    # isbn13 string have 13 chars. All of them should be numbers. 
    if re.match('^\d{13}$', code):
        sum = 0

        # result = (isbn[0] * 1 + isbn[1] * 3 + ... + isbn[12] * 1) mod 10 == 0
        for i in range(len(code)):
            digit = int(code[i])
            sum += digit * (3 if isOdd(i) else 1)
        
        result = sum % 10 == 0

    return result

def isOdd( n ): 
    return n % 2 != 0

isbns = [
    "978-89-6421-247-9",
    "9788964212479"
]

for isbn in isbns:
    print ( "{0} is valid ISBN code? {1}".format(isbn, isValidISBN(isbn)) )

 