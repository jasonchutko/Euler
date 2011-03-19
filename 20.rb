factorial = 1
sum = 0

for x in 1...100
	factorial *= x
end

factorial = factorial.to_s

for x in 0...factorial.length
	sum += factorial[x].to_i - 48 #is -48 necessary?
end 

print sum
