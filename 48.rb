x = 0
for i in 1...1001
x += i**i
end

x = x.to_s

puts x[x.length - 10, x.length]