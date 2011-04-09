def factorial(n)

temp = 1

if n == 0
return 1

else

while n > 1
temp *= n
n -= 1
end

return temp

end
end

count = 0


for n in 1...101

	for r in 0...(n+1)
		if((factorial(n)) / ((factorial(r)) * (factorial(n-r))) > 1000000)
			count += 1
		end
	end

end



p count