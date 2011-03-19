diff = 0
sumOfSquares = 0
sum = 0

for x in 1...100
	sum += x
	sumOfSquares += x**2
end

print sum**2 - sumOfSquares
