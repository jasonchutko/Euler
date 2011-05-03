answer = 0
p = 40756

while(answer <= 0)

a = (-1 + Math.sqrt(1 + 8*p)) / 2
b = (1 + Math.sqrt(1 + 24*p))/6
c = (1 + Math.sqrt(1 + 8*p)) / 4

if(a == a.floor && b == b.floor && c == c.floor)
answer = p

else
p += 1
end

end

puts p


