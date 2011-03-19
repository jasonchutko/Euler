sum = 0

x = 2**1000
x = x.to_s

for y in 0...x.length
sum += x[y] - 48 #is -48 necessary?
end

print sum
