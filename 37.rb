require 'mathn'

sum = 0
times = 0

for x in Prime

	if times == 11
		break
	end

	if x > 7

		isPrime = true

		num = x

		while num > 10
			num = (num / 10).floor
			if Prime.prime?(num) == false
				isPrime = false
			end
		end

		num = x
		count = 0

		while num > 10
			count += 1
			num = (num / 10).floor
		end

		num = x

		for i in 0...count
			num = num % (10**(count-i))
			if Prime.prime?(num) == false
				isPrime = false
			end
		end



		if isPrime == true
			sum += x
			times += 1
		end

	end

end

puts sum