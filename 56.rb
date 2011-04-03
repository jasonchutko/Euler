sum = 0

for a in 1...100

for b in 1...100

tempSum = 0

x = (a**b).to_s

for p in 0...x.length
tempSum += x[p].to_i
end

if tempSum > sum
sum = tempSum
end

end

end

puts sum