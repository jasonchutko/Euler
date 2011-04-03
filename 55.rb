$count = 0

def lych(num, steps)



if steps < 50
	s = num.to_s.reverse.to_i

	i = s + num

	if i.to_s == i.to_s.reverse #valid = do nothing


	else
		return lych(i, steps + 1)
	end
else
$count += 1 #over 50, add to count
end



end

for a in 1...10000
lych(a,0)
end

puts $count