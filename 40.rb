totalLength = 0
a = 1

totalMultiplied = 1

while(totalLength < 1000001)
	for x in 1...7
		if(totalLength <= 10**x && totalLength + a.to_s.length >= 10**x)
			i = a.to_s
			totalMultiplied *= i[10**x - totalLength - 1] - 48
		end
	end

	totalLength += a.to_s.length
	a += 1
end

puts totalMultiplied
