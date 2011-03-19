data = File.open("13data.txt", "r")

sum = 0
final = 0

for x in 1...101
sum += data.readline.to_i
end

sum = sum.to_s


for x in 0...10
print sum[x].to_i - 48
end

#print sum

#print final
