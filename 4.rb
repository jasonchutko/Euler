max = 0

for x in 100...1000
	for y in 100...1000
		if (x * y).to_s == (x * y).to_s.reverse
			if x * y > max
				max = x * y;
			end
		end
	end
end

print max;
