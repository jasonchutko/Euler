#extremely slow method, but works!

num = 0

x = 20

while x != 0
	if num % x != 0 or num == 0
	x = 20
	num += 20
	
	else
	x -= 1
	end
	#print num #uncomment for verbose
	#print "\n"
end

print num
