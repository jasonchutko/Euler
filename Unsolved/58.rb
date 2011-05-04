=begin
Diagonal Equations
Top right: 4n^2 - 10n + 7
Top Left: 4n^2 -8n + 5

Bottom Right: 4n^2 - 4n + 1
Bottom Left: 4n^2 -6n + 3
=end

require 'mathn'

#counter = 0

a = Array.new

a.push(1)

i = 1

counter = 1

while (counter / a.length * 100 > 10)
counter = 0
i += 1
puts i

a.push(4*i**2 - 10*i + 7)
a.push(4*i**2 - 8*i + 5)
a.push(4*i**2 - 4*i + 1)
a.push(4*i**2 - 6*i + 3)


for x in 0...a.length
if(a[x].prime? == true)
counter += 1
end
end

end


puts i + 2
