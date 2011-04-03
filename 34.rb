sum = 0

def factorial(num)
temp = 1
while num > 1
temp *= num
num -= 1
end

return temp
end



for i in 3...100000 #large enough value


x = i.to_s

factSum = 0

for p in 0...x.length
factSum += factorial(x[p].to_i)
end

if factSum == i
sum += i
end

end



puts sum
