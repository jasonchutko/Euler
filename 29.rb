count = 0

array = Array.new()

for a in 2...101

for b in 2...101

if array.include?(a**b) == false
array.push(a**b)
count += 1
end

end

end

puts count
