#!python

def numToStr( i ):
    if i == 1 :
        return 'zero'
    if i == 1 :
        return 'one'
    if i == 2 :
        return 'two'
    if i == 3 :
        return 'three'
    if i == 4:
        return 'four'

    if i == 5:
        return 'five'
        
    return 'many'

def main():
  print ("Hello world!")
  print( numToStr(0) )
  print( numToStr(44) )
  print( numToStr(2) )

if __name__ == "__main__":
    main()
