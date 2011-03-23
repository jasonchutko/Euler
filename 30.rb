total = 0

for i in 2...1000000 #arbitrary max, start at 2 because 1 doesn't count
i = i.to_s
sum = 0
for x in (0...i.length)
sum += (i[x] - 48)**5
end

if sum.to_s == i
total += sum
end
end

print total
