require 'mathn'

x = 3

total = 1

while(x < 1000000)

	tempSum = 0

	a = x #temporary storage

	if a.prime? == true

		if (a.to_s.index("0") == nil && a.to_s.index("2") == nil && a.to_s.index("4") == nil && a.to_s.index("6") == nil && a.to_s.index("8") == nil)

			for i in 0...x.to_s.length
				a = ((a % 10**(a.to_s.length - 1)) * 10 + (a / 10**(a.to_s.length - 1))).floor

				if a.prime? == true
					tempSum += 1
				end
			end

			if(tempSum == a.to_s.length)
				total += 1
				#puts x
			end
		end

	end
	
x += 2

end

puts total
