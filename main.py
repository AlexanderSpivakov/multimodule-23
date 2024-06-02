#!python

def numToStr(i):
    if i == 0 :
        return 'Zorro'
    if i == 1 :
        return 'Алёхин'
    if i == 2 :
        return 'Барабанов'
    if i == 3 :
        return 'Зажигин'
    if i == 4:
        return 'Егорцев'
    if i == 5:
        return 'Карасёв'
    return 'empty'

def main():
  print ("УТС-33")
  print( numToStr(0) )
  print( numToStr(1) )
  print( numToStr(2) )
  print( numToStr(3) )


if __name__ == '__main__':
    main()
