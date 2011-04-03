sum = 1 #includes 0

def b2d(int) #credits to internet, modified to remove leading zeros!
    
    ## constant = 10000000000000000000000000000000
    const = 0x80000000;
    output = "";
    
    i = 0;
    ## for each bit
    while( i < 32)
        
        ## if the bit is set, print 1
        if( (int & const) != 0 )
            output = output + "1";
        else
            output = output + "0";
        end
            
        ## shift the constant using right shift
        const = const >> 1;
        i = i + 1;
    end
	
	q = 0
	
	until output[q] != "0"
		q += 1
	end
	

	output = output[q,output.length]
	
    return output;
end

for x in 2...1000001
if (x.to_s == x.to_s.reverse) and b2d(x) == b2d(x).reverse
sum += x
end
end

puts sum