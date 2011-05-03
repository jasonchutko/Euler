require 'matrix'

FIB_MATRIX = Matrix[[1,1],[1,0]]
def fib(n)
  (FIB_MATRIX**(n-1))[0,0]
end

i = 5

while fib(i).to_s.length < 1000
  i+= 1
  end
puts i
