require 'mathn'

prime_num = Prime.new

biggest = 0

x = 600851475143 #starting value

for i in 2...1000
if x % i == 0
x = x/i
end
end

p = prime_num.next

while p < (x / 1000).floor #biggest

if x % p == 0
biggest = p;
end
p = prime_num.next

end

puts biggest
